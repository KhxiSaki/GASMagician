# GASMagician 🔮

**The Ultimate Gameplay Ability System Framework for Unreal Engine 5**  
*Powered by Common GAS - Your Blueprint-First Gateway to Professional-Grade Abilities*

[![Version](https://img.shields.io/badge/Version-1.0-blue)](https://github.com/KhxiSaki/GASMagician/releases)
[![Discord](https://img.shields.io/discord/your-invite-code?logo=discord)]([https://discord.gg/your-invite-link](https://discord.gg/M2K8mnm9f7))

---

## 🚀 Revolutionize Your Ability Design
**GASMagician** supercharges Epic's Gameplay Ability System with **GAS Magician** - a production-ready framework integrating:
- 🧩 **Modular Gameplay Architecture**
- 🎮 **Enhanced Input System**
- 🤖 **AI/Player Parity**
- ⚡ **Lyra's Inspired AbilitySet, TagRelationshipMapping and Input Systems**
---

## 🌟 What's Inside?

### 🛠️ **Common GAS Core**
| Feature                | Description                                  |
|------------------------|----------------------------------------------|
| **Dual ASC Support**    | PlayerState (Players) + Pawn (AI) components |
| **Attribute System**    | Health/Mana + Easy Expansion                 |
| **State Trees**         | Experimental UE5.1 StateTree AI              |
| **Lyra Foundations**    | Ability Tags, Input Binding, Effect Containers |

### 🔮 **GASMagician Magic**
| Feature                | Description                                  |
|------------------------|----------------------------------------------|
| **Blueprint Libraries** | 15+ Ready-to-Use BP Utilities               |
| **AI Tasks**            | `ActivateAbilityByClass`, `ApplyEffectToTarget` |
| **Custom Abilities**    | GameplayEffect Containers (ActionRPG-style)  |
| **Network-Ready**       | Full multiplayer replication                |

---

## 📦 Technical Specifications

| **Category**          | **Details**                              |
|-----------------------|------------------------------------------|
| **Code Modules**      | `GASMagician` (Runtime), `GASMagicianDeveloper` (Uncooked), `GASMagicianEditor` (Editor), `GASMagicianGameProjectGeneration` (Editor) |
| **Dependencies**       | GameplayAbilities, EnhancedInput, AI, StateTree |
| **C++ Classes**        | 0                                       |
| **Network Support**   | Full Replication                         |
| **UE Version**        | 5.5                                     |

---

## ⚠️ Current Limitations (v1.0)
| **Area**              | **Status**               | **Roadmap**                      |
|-----------------------|--------------------------|----------------------------------|
| ASC Event Binding     | ❌ Not BP-Exposed         | ✅ v1.1 (Q3 2023)               |
| Targeting System      | ❌ ActionRPG Legacy       | ✅ UE5.2 GameplayTargetingSystem |
| Death/Respawn         | ❌ Not Implemented        | ✅ Q4 2023                      |

---

## 🛠️ Getting Started

1. **Installation**  
   ```bash
   Copy Plugins/CommonGAS to your project's Plugin directory

## GASMagician Damage Pipeline

# Introduction 
In Unreal Engine, point damage applies damage at a specific point on a target, like a bullet hit, while radial damage applies damage from a point source outward, like an explosion.
Here's a more detailed breakdown:
Point Damage:
Models damage applied at a specific location on the victim, like a bullet or a punch.
Includes the direction the hit came from and information about the surface impact.
Use ApplyPointDamage in Blueprints or FPointDamageEvent in C++.
Radial Damage:
Models damage that spreads out from a central point, such as an explosion.
Includes the epicenter of the damage, data for damage falloff, and a list of affected components.
Use ApplyRadialDamage in Blueprints or FRadialDamageEvent in C++.
Damage Types:
You can define and customize different types of damage, like fire, to affect how actors respond to damage.
Use UDamageType to create custom damage types.
Damage Events:
Actors can respond to damage events, such as "AnyDamage" or "PointDamage".
You can also define custom damage events for your project.
Blueprints vs. C++:
You can use ApplyDamage, ApplyPointDamage, and ApplyRadialDamage nodes in Blueprints to inflict damage.
In C++, you can use FPointDamageEvent and FRadialDamageEvent structures to apply damage.

# Actor and Pawn Damage Pipeline
i want to introduce ontakeanydamage, ontakeradialdamage and ontakepoint damage from unreal old damage system and translate it to unreal engine 5 gameplay abilities damage pipeline.

here how we declare it: 

DamageType.h:
```cpp
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "DamageType.generated.h"

/**
 * A DamageType is intended to define and describe a particular form of damage and to provide an avenue 
 * for customizing responses to damage from various sources.
 *
 * For example, a game could make a DamageType_Fire set it up to ignite the damaged actor.
 *
 * DamageTypes are never instanced and should be treated as immutable data holders with static code
 * functionality.  They should never be stateful.
 */
UCLASS(MinimalAPI, const, Blueprintable, BlueprintType)
class UDamageType : public UObject
{
	GENERATED_UCLASS_BODY()

	/** True if this damagetype is caused by the world (falling off level, into lava, etc). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=DamageType)
	uint32 bCausedByWorld:1;

	/** True to scale imparted momentum by the receiving pawn's mass for pawns using character movement */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=DamageType)
	uint32 bScaleMomentumByMass:1;

	/** When applying radial impulses, whether to treat as impulse or velocity change. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RigidBody)
	uint32 bRadialDamageVelChange : 1;

	/** The magnitude of impulse to apply to the Actors damaged by this type. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RigidBody)
	float DamageImpulse;

	/** How large the impulse should be applied to destructible meshes */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Destruction)
	float DestructibleImpulse;

	/** How much the damage spreads on a destructible mesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Destruction)
	float DestructibleDamageSpreadScale;

	/** Damage fall-off for radius damage (exponent).  Default 1.0=linear, 2.0=square of distance, etc. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=DamageType)
	float DamageFalloff;
};
```

```cpp
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FiveParams( FTakeAnyDamageSignature, AActor, OnTakeAnyDamage, AActor*, DamagedActor, float, Damage, const class UDamageType*, DamageType, class AController*, InstigatedBy, AActor*, DamageCauser ); 
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_NineParams( FTakePointDamageSignature, AActor, OnTakePointDamage, AActor*, DamagedActor, float, Damage, class AController*, InstigatedBy, FVector, HitLocation, class UPrimitiveComponent*, FHitComponent, FName, BoneName, FVector, ShotFromDirection, const class UDamageType*, DamageType, AActor*, DamageCauser ); 
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_SevenParams( FTakeRadialDamageSignature, AActor, OnTakeRadialDamage, AActor*, DamagedActor, float, Damage, const class UDamageType*, DamageType, FVector, Origin, const FHitResult&, HitInfo, class AController*, InstigatedBy, AActor*, DamageCauser );

/** Called when the actor is damaged in any way. */
UPROPERTY(BlueprintAssignable, Category="Game|Damage")
FTakeAnyDamageSignature OnTakeAnyDamage;

/** Called when the actor is damaged by point damage. */
UPROPERTY(BlueprintAssignable, Category="Game|Damage")
FTakePointDamageSignature OnTakePointDamage;

/** Called when the actor is damaged by radial damage. */
UPROPERTY(BlueprintAssignable, Category="Game|Damage")
FTakeRadialDamageSignature OnTakeRadialDamage;


/**
* Apply damage to this actor.
* @see https://www.unrealengine.com/blog/damage-in-ue4
* @param DamageAmount		How much damage to apply
* @param DamageEvent		Data package that fully describes the damage received.
* @param EventInstigator	The Controller responsible for the damage.
* @param DamageCauser		The Actor that directly caused the damage (e.g. the projectile that exploded, the rock that landed on you)
* @return					The amount of damage actually applied.
  */
  ENGINE_API virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);
  protected: ENGINE_API virtual float InternalTakeRadialDamage(float Damage, struct FRadialDamageEvent const& RadialDamageEvent, class AController* EventInstigator, AActor* DamageCauser); 
  ENGINE_API virtual float InternalTakePointDamage(float Damage, struct FPointDamageEvent const& PointDamageEvent, class AController* EventInstigator, AActor* DamageCauser);
```
and here the implementation: 
```cpp
float AActor::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float ActualDamage = DamageAmount;

	UDamageType const* const DamageTypeCDO = DamageEvent.DamageTypeClass ? DamageEvent.DamageTypeClass->GetDefaultObject<UDamageType>() : GetDefault<UDamageType>();
	if (DamageEvent.IsOfType(FPointDamageEvent::ClassID))
	{
		// point damage event, pass off to helper function
		FPointDamageEvent* const PointDamageEvent = (FPointDamageEvent*) &DamageEvent;
		ActualDamage = InternalTakePointDamage(ActualDamage, *PointDamageEvent, EventInstigator, DamageCauser);

		// K2 notification for this actor
		if (ActualDamage != 0.f)
		{
			ReceivePointDamage(ActualDamage, DamageTypeCDO, PointDamageEvent->HitInfo.ImpactPoint, PointDamageEvent->HitInfo.ImpactNormal, PointDamageEvent->HitInfo.Component.Get(), PointDamageEvent->HitInfo.BoneName, PointDamageEvent->ShotDirection, EventInstigator, DamageCauser, PointDamageEvent->HitInfo);
			OnTakePointDamage.Broadcast(this, ActualDamage, EventInstigator, PointDamageEvent->HitInfo.ImpactPoint, PointDamageEvent->HitInfo.Component.Get(), PointDamageEvent->HitInfo.BoneName, PointDamageEvent->ShotDirection, DamageTypeCDO, DamageCauser);

			// Notify the component
			UPrimitiveComponent* const PrimComp = PointDamageEvent->HitInfo.Component.Get();
			if (PrimComp)
			{
				PrimComp->ReceiveComponentDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
			}
		}
	}
	else if (DamageEvent.IsOfType(FRadialDamageEvent::ClassID))
	{
		// radial damage event, pass off to helper function
		FRadialDamageEvent* const RadialDamageEvent = (FRadialDamageEvent*) &DamageEvent;
		ActualDamage = InternalTakeRadialDamage(ActualDamage, *RadialDamageEvent, EventInstigator, DamageCauser);

		// K2 notification for this actor
		if (ActualDamage != 0.f)
		{
			FHitResult const& Hit = (RadialDamageEvent->ComponentHits.Num() > 0) ? RadialDamageEvent->ComponentHits[0] : FHitResult();
			ReceiveRadialDamage(ActualDamage, DamageTypeCDO, RadialDamageEvent->Origin, Hit, EventInstigator, DamageCauser);
			OnTakeRadialDamage.Broadcast(this, ActualDamage, DamageTypeCDO, RadialDamageEvent->Origin, Hit, EventInstigator, DamageCauser);

			// add any desired physics impulses to our components
			for (int HitIdx = 0; HitIdx < RadialDamageEvent->ComponentHits.Num(); ++HitIdx)
			{
				FHitResult const& CompHit = RadialDamageEvent->ComponentHits[HitIdx];
				UPrimitiveComponent* const PrimComp = CompHit.Component.Get();
				if (PrimComp && PrimComp->GetOwner() == this)
				{
					PrimComp->ReceiveComponentDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
				}
			}
		}
	}

	// generic damage notifications sent for any damage
	// note we will broadcast these for negative damage as well
	if (ActualDamage != 0.f)
	{
		ReceiveAnyDamage(ActualDamage, DamageTypeCDO, EventInstigator, DamageCauser);
		OnTakeAnyDamage.Broadcast(this, ActualDamage, DamageTypeCDO, EventInstigator, DamageCauser);
		if (EventInstigator != nullptr)
		{
			EventInstigator->InstigatedAnyDamage(ActualDamage, DamageTypeCDO, this, DamageCauser);
		}
	}

	return ActualDamage;
}

float AActor::InternalTakeRadialDamage(float Damage, FRadialDamageEvent const& RadialDamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	float ActualDamage = Damage;

	FVector ClosestHitLoc(0);

	// find closest component
	// @todo, something more accurate here to account for size of components, e.g. closest point on the component bbox?
	// @todo, sum up damage contribution to each component?
	float ClosestHitDistSq = UE_MAX_FLT;
	for (int32 HitIdx=0; HitIdx<RadialDamageEvent.ComponentHits.Num(); ++HitIdx)
	{
		FHitResult const& Hit = RadialDamageEvent.ComponentHits[HitIdx];
		float const DistSq = (Hit.ImpactPoint - RadialDamageEvent.Origin).SizeSquared();
		if (DistSq < ClosestHitDistSq)
		{
			ClosestHitDistSq = DistSq;
			ClosestHitLoc = Hit.ImpactPoint;
		}
	}

	float const RadialDamageScale = RadialDamageEvent.Params.GetDamageScale( FMath::Sqrt(ClosestHitDistSq) );

	ActualDamage = FMath::Lerp(RadialDamageEvent.Params.MinimumDamage, ActualDamage, FMath::Max(0.f, RadialDamageScale));

	return ActualDamage;
}

float AActor::InternalTakePointDamage(float Damage, FPointDamageEvent const& PointDamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	return Damage;
}
```

now here is that implementation in Pawn, Pawn is a subclass of Actor: 
```cpp
/** Controller of the last Actor that caused us damage. */ 
UPROPERTY(BlueprintReadOnly, transient, Category="Pawn") 
TObjectPtr<AController> LastHitBy;

ENGINE_API virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

/** * Return true if we are in a state to take damage (checked at the start of TakeDamage. * Subclasses may check this as well if they override TakeDamage and don't want to potentially trigger TakeDamage actions by checking if it returns zero in the super class. / 
ENGINE_API virtual bool ShouldTakeDamage(float Damage, FDamageEvent const& DamageEvent, AController EventInstigator, AActor* DamageCauser) const;

/** Get the controller instigating the damage. If the damage is caused by the world and the supplied controller is nullptr or is this pawn's controller, uses LastHitBy as the instigator. / 
ENGINE_API virtual AController GetDamageInstigator(AController* InstigatedBy, const UDamageType& DamageType) const;
```
and here pawn.cpp: 
```cpp
bool APawn::ShouldTakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) const
{
	if ((GetLocalRole() < ROLE_Authority) || !CanBeDamaged() || !GetWorld()->GetAuthGameMode() || (Damage == 0.f))
	{
		return false;
	}

	return true;
}

float APawn::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (!ShouldTakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser))
	{
		return 0.f;
	}

	// do not modify damage parameters after this
	const float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	// respond to the damage
	if (ActualDamage != 0.f)
	{
		if ( EventInstigator && EventInstigator != Controller )
		{
			LastHitBy = EventInstigator;
		}
	}

	return ActualDamage;
}


AController* APawn::GetDamageInstigator(AController* InstigatedBy, const UDamageType& DamageType) const
{
	if ( (InstigatedBy != nullptr) && (InstigatedBy != Controller) )
	{
		return InstigatedBy;
	}
	else if ( DamageType.bCausedByWorld && (LastHitBy != nullptr) )
	{
		return LastHitBy;
	}
	return InstigatedBy;
}
```
now here is DamageEvents.h: 
```cpp
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NetSerialization.h"
#include "Engine/HitResult.h"
#include "DamageEvents.generated.h"

class UDamageType;

/** Event used by AActor::TakeDamage and related functions */
USTRUCT(BlueprintType)
struct FDamageEvent
{
	GENERATED_BODY()

public:
	/** Default constructor (no initialization). */
	FDamageEvent() { }

	FDamageEvent(FDamageEvent const& InDamageEvent)
		: DamageTypeClass(InDamageEvent.DamageTypeClass)
	{ }
	
	virtual ~FDamageEvent() { }

	explicit FDamageEvent(TSubclassOf<UDamageType> InDamageTypeClass)
		: DamageTypeClass(InDamageTypeClass)
	{ }

	/** Optional DamageType for this event.  If nullptr, UDamageType will be assumed. */
	UPROPERTY()
	TSubclassOf<UDamageType> DamageTypeClass;

	/** ID for this class. NOTE this must be unique for all damage events. */
	static const int32 ClassID = 0;

	virtual int32 GetTypeID() const { return FDamageEvent::ClassID; }
	virtual bool IsOfType(int32 InID) const { return FDamageEvent::ClassID == InID; };

	/** This is for compatibility with old-style functions which want a unified set of hit data regardless of type of hit.  Ideally this will go away over time. */
	ENGINE_API virtual void GetBestHitInfo(AActor const* HitActor, AActor const* HitInstigator, FHitResult& OutHitInfo, FVector& OutImpulseDir) const;
};

/** Damage subclass that handles damage with a single impact location and source direction */
USTRUCT()
struct FPointDamageEvent : public FDamageEvent
{
	GENERATED_BODY()

	/** Actual damage done */
	UPROPERTY()
	float Damage;
	
	/** Direction the shot came from. Should be normalized. */
	UPROPERTY()
	FVector_NetQuantizeNormal ShotDirection;
	
	/** Describes the trace/location that caused this damage */
	UPROPERTY()
	FHitResult HitInfo;

	FPointDamageEvent() : Damage(0.0f), ShotDirection(ForceInitToZero), HitInfo() {}
	FPointDamageEvent(float InDamage, const FHitResult& InHitInfo, FVector const& InShotDirection, TSubclassOf<UDamageType> InDamageTypeClass)
		: FDamageEvent(InDamageTypeClass), Damage(InDamage), ShotDirection(InShotDirection), HitInfo(InHitInfo)
	{}
	
	/** ID for this class. NOTE this must be unique for all damage events. */
	static const int32 ClassID = 1;
	
	virtual int32 GetTypeID() const override { return FPointDamageEvent::ClassID; };
	virtual bool IsOfType(int32 InID) const override { return (FPointDamageEvent::ClassID == InID) || FDamageEvent::IsOfType(InID); };

	/** Simple API for common cases where we are happy to assume a single hit is expected, even though damage event may have multiple hits. */
	ENGINE_API virtual void GetBestHitInfo(AActor const* HitActor, AActor const* HitInstigator, FHitResult& OutHitInfo, FVector& OutImpulseDir) const override;
};

/** Parameters used to compute radial damage */
USTRUCT(BlueprintType)
struct FRadialDamageParams
{
	GENERATED_BODY()

	/** Max damage done */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RadialDamageParams)
	float BaseDamage;

	/** Damage will not fall below this if within range */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RadialDamageParams)
	float MinimumDamage;
	
	/** Within InnerRadius, do max damage */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RadialDamageParams)
	float InnerRadius;
		
	/** Outside OuterRadius, do no damage */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RadialDamageParams)
	float OuterRadius;
		
	/** Describes amount of exponential damage falloff */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RadialDamageParams)
	float DamageFalloff;

	FRadialDamageParams()
		: BaseDamage(0.f), MinimumDamage(0.f), InnerRadius(0.f), OuterRadius(0.f), DamageFalloff(1.f)
	{}
	FRadialDamageParams(float InBaseDamage, float InInnerRadius, float InOuterRadius, float InDamageFalloff)
		: BaseDamage(InBaseDamage), MinimumDamage(0.f), InnerRadius(InInnerRadius), OuterRadius(InOuterRadius), DamageFalloff(InDamageFalloff)
	{}
	FRadialDamageParams(float InBaseDamage, float InMinimumDamage, float InInnerRadius, float InOuterRadius, float InDamageFalloff)
		: BaseDamage(InBaseDamage), MinimumDamage(InMinimumDamage), InnerRadius(InInnerRadius), OuterRadius(InOuterRadius), DamageFalloff(InDamageFalloff)
	{}
	FRadialDamageParams(float InBaseDamage, float InRadius)
		: BaseDamage(InBaseDamage), MinimumDamage(0.f), InnerRadius(0.f), OuterRadius(InRadius), DamageFalloff(1.f)
	{}

	/** Returns damage done at a certain distance */
	ENGINE_API float GetDamageScale(float DistanceFromEpicenter) const;

	/** Return outermost radius of the damage area. Protects against malformed data. */
	float GetMaxRadius() const { return FMath::Max( FMath::Max(InnerRadius, OuterRadius), 0.f ); }
};

/** Damage subclass that handles damage with a source location and falloff radius */
USTRUCT()
struct FRadialDamageEvent : public FDamageEvent
{
	GENERATED_BODY()

	/** Static parameters describing damage falloff math */
	UPROPERTY()
	FRadialDamageParams Params;
	
	/** Location of origin point */
	UPROPERTY()
	FVector Origin;

	/** Hit reslts of specific impacts */
	UPROPERTY()
	TArray<FHitResult> ComponentHits;

	/** ID for this class. NOTE this must be unique for all damage events. */
	static const int32 ClassID = 2;

	virtual int32 GetTypeID() const override { return FRadialDamageEvent::ClassID; };
	virtual bool IsOfType(int32 InID) const override { return (FRadialDamageEvent::ClassID == InID) || FDamageEvent::IsOfType(InID); };

	/** Simple API for common cases where we are happy to assume a single hit is expected, even though damage event may have multiple hits. */
	ENGINE_API virtual void GetBestHitInfo(AActor const* HitActor, AActor const* HitInstigator, FHitResult& OutHitInfo, FVector& OutImpulseDir) const override;

	FRadialDamageEvent()
		: Origin(ForceInitToZero)
	{}
};



```
and here is DamageEvents.cpp: 
```cpp
// Copyright Epic Games, Inc. All Rights Reserved.

#include "Engine/DamageEvents.h"
#include "Components/PrimitiveComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(DamageEvents)

void FDamageEvent::GetBestHitInfo(AActor const* HitActor, AActor const* HitInstigator, FHitResult& OutHitInfo, FVector& OutImpulseDir) const
{
	if (ensure(HitActor))
	{
		// fill out the hitinfo as best we can
		OutHitInfo.HitObjectHandle = FActorInstanceHandle(const_cast<AActor*>(HitActor));
		OutHitInfo.bBlockingHit = true;
		OutHitInfo.BoneName = NAME_None;
		OutHitInfo.Component = Cast<UPrimitiveComponent>(HitActor->GetRootComponent());

		// assume the actor got hit in the center of its root component
		OutHitInfo.ImpactPoint = HitActor->GetActorLocation();
		OutHitInfo.Location = OutHitInfo.ImpactPoint;

		// assume hit came from instigator's location
		OutImpulseDir = HitInstigator ?
			(OutHitInfo.ImpactPoint - HitInstigator->GetActorLocation()).GetSafeNormal()
			: FVector::ZeroVector;

		// assume normal points back toward instigator
		OutHitInfo.ImpactNormal = -OutImpulseDir;
		OutHitInfo.Normal = OutHitInfo.ImpactNormal;
	}
}

void FPointDamageEvent::GetBestHitInfo(AActor const* HitActor, AActor const* HitInstigator, FHitResult& OutHitInfo, FVector& OutImpulseDir) const
{
	// assume the actor got hit in the center of its root component
	OutHitInfo = HitInfo;
	OutImpulseDir = ShotDirection;
}

void FRadialDamageEvent::GetBestHitInfo(AActor const* HitActor, AActor const* HitInstigator, FHitResult& OutHitInfo, FVector& OutImpulseDir) const
{
	ensure(ComponentHits.Num() > 0);

	// for now, just return the first one
	OutHitInfo = ComponentHits[0];
	OutImpulseDir = (OutHitInfo.ImpactPoint - Origin).GetSafeNormal();
}

float FRadialDamageParams::GetDamageScale(float DistanceFromEpicenter) const
{
	float const ValidatedInnerRadius = FMath::Max(0.f, InnerRadius);
	float const ValidatedOuterRadius = FMath::Max(OuterRadius, ValidatedInnerRadius);
	float const ValidatedDist = FMath::Max(0.f, DistanceFromEpicenter);

	if (ValidatedDist >= ValidatedOuterRadius)
	{
		// outside the radius, no effect
		return 0.f;
	}

	if ((DamageFalloff == 0.f) || (ValidatedDist <= ValidatedInnerRadius))
	{
		// no falloff or inside inner radius means full effect
		return 1.f;
	}

	// calculate the interpolated scale
	float DamageScale = 1.f - ((ValidatedDist - ValidatedInnerRadius) / (ValidatedOuterRadius - ValidatedInnerRadius));
	DamageScale = FMath::Pow(DamageScale, DamageFalloff);

	return DamageScale;
}


```

Character.h:
```cpp
/** Apply momentum caused by damage. */
	ENGINE_API virtual void ApplyDamageMomentum(float DamageTaken, FDamageEvent const& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser);
```
.cpp:
```cpp
void ACharacter::ApplyDamageMomentum(float DamageTaken, FDamageEvent const& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser)
{
	UDamageType const* const DmgTypeCDO = DamageEvent.DamageTypeClass->GetDefaultObject<UDamageType>();
	float const ImpulseScale = DmgTypeCDO->DamageImpulse;

	if ( (ImpulseScale > 3.f) && (CharacterMovement != nullptr) )
	{
		FHitResult HitInfo;
		FVector ImpulseDir;
		DamageEvent.GetBestHitInfo(this, PawnInstigator, HitInfo, ImpulseDir);

		FVector Impulse = ImpulseDir * ImpulseScale;
		bool const bMassIndependentImpulse = !DmgTypeCDO->bScaleMomentumByMass;

		// limit Z momentum added if already going up faster than jump (to avoid blowing character way up into the sky)
		{
			FVector MassScaledImpulse = Impulse;
			if(!bMassIndependentImpulse && CharacterMovement->Mass > UE_SMALL_NUMBER)
			{
				MassScaledImpulse = MassScaledImpulse / CharacterMovement->Mass;
			}

			if ( (CharacterMovement->Velocity.Z > GetDefault<UCharacterMovementComponent>(CharacterMovement->GetClass())->JumpZVelocity) && (MassScaledImpulse.Z > 0.f) )
			{
				Impulse.Z *= 0.5f;
			}
		}

		CharacterMovement->AddImpulse(Impulse, bMassIndependentImpulse);
	}
}

```
# Current Damage Pipeline
building a damage pipeline for my gameplayabilities plugin.
here the current basic damage pipeline:

here is my current attribute set:
.h:
```cpp
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "GSMAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

#define GSM_GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
float GSMGet##PropertyName() const \
{ \
return PropertyName.GetCurrentValue(); \
}

#define GSM_GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
void GSMSet##PropertyName(float NewVal) \
{ \
UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent(); \
if (ensure(AbilityComp)) \
{ \
AbilityComp->SetNumericAttributeBase(Get##PropertyName##Attribute(), NewVal); \
}; \
}

#define GSM_GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName) \
void GSMInit##PropertyName(float NewVal) \
{ \
PropertyName.SetBaseValue(NewVal); \
PropertyName.SetCurrentValue(NewVal); \
}

class AActor;
class UObject;
class UWorld;
struct FGameplayEffectSpec;

/**
* Delegate used to broadcast attribute events, some of these parameters may be null on clients:
* @param EffectInstigator	The original instigating actor for this event
* @param EffectCauser		The physical actor that caused the change
* @param EffectSpec		The full effect spec for this change
* @param EffectMagnitude	The raw magnitude, this is before clamping
* @param OldValue			The value of the attribute before it was changed
* @param NewValue			The value after it was changed
  */
  DECLARE_MULTICAST_DELEGATE_SixParams(FGSMAttributeEvent, AActor* /*EffectInstigator*/, AActor* /*EffectCauser*/, const FGameplayEffectSpec* /*EffectSpec*/, float /*EffectMagnitude*/, float /*OldValue*/, float /*NewValue*/);

/**
*
*/
UCLASS(BlueprintType)
class GASMAGICIAN_API UGSMAttributeSet : public UAttributeSet
{
GENERATED_BODY()


public:
UGSMAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
//Health
UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Health, Category = "GASMagician|Attributes", meta = (HideFromModifiers))
FGameplayAttributeData Health;
UFUNCTION()
void OnRep_Health(const FGameplayAttributeData& OldHealth);
ATTRIBUTE_ACCESSORS(UGSMAttributeSet, Health)
UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
float GSMGetHealth() const
{
return Health.GetCurrentValue();
}
UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
void GSMSetHealth(float NewVal)
{
UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
if (ensure(AbilityComp))
{
AbilityComp->SetNumericAttributeBase(GetHealthAttribute(), NewVal);
};
}
UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
void GSMInitHealth(float NewVal)
{
Health.SetBaseValue(NewVal);
Health.SetCurrentValue(NewVal);
}

	//MaxHealth
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxHealth, Category = "GASMagician|Attributes")
		FGameplayAttributeData MaxHealth;
	UFUNCTION()
		void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, MaxHealth)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetMaxHealth() const
	{
		return MaxHealth.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetMaxHealth(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetMaxHealthAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitMaxHealth(float NewVal)
	{
		MaxHealth.SetBaseValue(NewVal);
		MaxHealth.SetCurrentValue(NewVal);
	}

	//HealthRegenRate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_HealthRegenRate, Category = "GASMagician|Attributes")
		FGameplayAttributeData HealthRegenRate;
	UFUNCTION()
		void OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, HealthRegenRate, OldHealthRegenRate); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, HealthRegenRate)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetHealthRegenRate() const
	{
		return HealthRegenRate.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetHealthRegenRate(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetHealthRegenRateAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitHealthRegenRate(float NewVal)
	{
		HealthRegenRate.SetBaseValue(NewVal);
		HealthRegenRate.SetCurrentValue(NewVal);
	}

	// Delegate when health changes due to damage/healing, some information may be missing on the client
	mutable FGSMAttributeEvent OnHealthChanged;

	// Delegate when max health changes
	mutable FGSMAttributeEvent OnMaxHealthChanged;

	// Delegate to broadcast when the health attribute reaches zero
	mutable FGSMAttributeEvent OnOutOfHealth;

private:
// Used to track when the health reaches 0.
bool bOutOfHealth;

	// Store the health before any changes 
	float MaxHealthBeforeAttributeChange;
	float HealthBeforeAttributeChange;
public:
//Mana
UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Mana, Category = "GASMagician|Attributes")
FGameplayAttributeData Mana;
UFUNCTION()
void OnRep_Mana(const FGameplayAttributeData& OldMana) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, Mana, OldMana); }
ATTRIBUTE_ACCESSORS(UGSMAttributeSet, Mana)
UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
float GSMGetMana() const
{
return Mana.GetCurrentValue();
}
UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
void GSMSetMana(float NewVal)
{
UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
if (ensure(AbilityComp))
{
AbilityComp->SetNumericAttributeBase(GetManaAttribute(), NewVal);
};
}
UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
void GSMInitMana(float NewVal)
{
Mana.SetBaseValue(NewVal);
Mana.SetCurrentValue(NewVal);
}

	//MaxMana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxMana, Category = "GASMagician|Attributes")
		FGameplayAttributeData MaxMana;
	UFUNCTION()
		void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, MaxMana, OldMaxMana); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, MaxMana)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetMaxMana() const
	{
		return MaxMana.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetMaxMana(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetMaxManaAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitMaxMana(float NewVal)
	{
		MaxMana.SetBaseValue(NewVal);
		MaxMana.SetCurrentValue(NewVal);
	}

	//ManaRegenRate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_ManaRegenRate, Category = "GASMagician|Attributes")
		FGameplayAttributeData ManaRegenRate;
	UFUNCTION()
		void OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, ManaRegenRate, OldManaRegenRate); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, ManaRegenRate)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetManaRegenRate() const
	{
		return ManaRegenRate.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetManaRegenRate(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetManaRegenRateAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitManaRegenRate(float NewVal)
	{
		ManaRegenRate.SetBaseValue(NewVal);
		ManaRegenRate.SetCurrentValue(NewVal);
	}

	//Stamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Stamina, Category = "GASMagician|Attributes")
		FGameplayAttributeData Stamina;
	UFUNCTION()
		void OnRep_Stamina(const FGameplayAttributeData& OldStamina) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, Stamina, OldStamina); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, Stamina)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetStamina() const
	{
		return Stamina.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetStamina(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetStaminaAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitStamina(float NewVal)
	{
		Stamina.SetBaseValue(NewVal);
		Stamina.SetCurrentValue(NewVal);
	}

	//MaxStamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxStamina, Category = "GASMagician|Attributes")
		FGameplayAttributeData MaxStamina;
	UFUNCTION()
		void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, MaxStamina, OldMaxStamina); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, MaxStamina)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetMaxStamina() const
	{
		return MaxStamina.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetMaxStamina(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetMaxStaminaAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitMaxStamina(float NewVal)
	{
		MaxStamina.SetBaseValue(NewVal);
		MaxStamina.SetCurrentValue(NewVal);
	}

	//StaminaRegenRate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_StaminaRegenRate, Category = "GASMagician|Attributes")
		FGameplayAttributeData StaminaRegenRate;
	UFUNCTION()
		void OnRep_StaminaRegenRate(const FGameplayAttributeData& OldStaminaRegenRate) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, StaminaRegenRate, OldStaminaRegenRate); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, StaminaRegenRate)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetStaminaRegenRate() const
	{
		return StaminaRegenRate.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetStaminaRegenRate(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetStaminaRegenRateAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitStaminaRegenRate(float NewVal)
	{
		StaminaRegenRate.SetBaseValue(NewVal);
		StaminaRegenRate.SetCurrentValue(NewVal);
	}

	/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GASMagician|Attributes", meta = (HideFromLevelInfos))		// You can't make a GameplayEffect 'powered' by Damage (Its transient)
	FGameplayAttributeData	Damage;

	/** This Healing is just used for applying positive health mods. Its not a 'persistent' attribute. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GASMagician|Attributes", meta = (HideFromLevelInfos))		// You can't make a GameplayEffect 'powered' by Healing (Its transient)
	FGameplayAttributeData	Healing;

protected:
/** Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes. (i.e. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before) */
void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual bool PreGameplayEffectExecute(struct FGameplayEffectModCallbackData &Data) override;
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;
	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
};
```


.cpp:
```cpp
// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeSets/GSMAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "GameplayTagsManager.h"
#include "Components/GSMAbilitySystemComponent.h"
#include "ModularGameplayActors/GSMModularCharacter.h"
#include "Net/UnrealNetwork.h"

UGSMAttributeSet::UGSMAttributeSet(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
bOutOfHealth = false;
MaxHealthBeforeAttributeChange = 0.0f;
HealthBeforeAttributeChange = 0.0f;
}

void UGSMAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, Health, OldHealth);

	// Call the change callback, but without an instigator
	// This could be changed to an explicit RPC in the future
	// These events on the client should not be changing attributes

	const float CurrentHealth = GetHealth();
	const float EstimatedMagnitude = CurrentHealth - OldHealth.GetCurrentValue();
	
	OnHealthChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldHealth.GetCurrentValue(), CurrentHealth);

	if (!bOutOfHealth && CurrentHealth <= 0.0f)
	{
		OnOutOfHealth.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldHealth.GetCurrentValue(), CurrentHealth);
	}

	bOutOfHealth = (CurrentHealth <= 0.0f);
}

void UGSMAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, MaxHealth, OldMaxHealth);
// Call the change callback, but without an instigator
// This could be changed to an explicit RPC in the future
OnMaxHealthChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxHealth() - OldMaxHealth.GetCurrentValue(), OldMaxHealth.GetCurrentValue(), GetMaxHealth());
}

bool UGSMAttributeSet::PreGameplayEffectExecute(struct FGameplayEffectModCallbackData &Data)
{
if (!Super::PreGameplayEffectExecute(Data))
{
return false;
}

	static FProperty *HealthProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Health));
	static FProperty *DamageProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Damage));
	static FProperty* HealingProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Healing));

	FProperty* ModifiedProperty = Data.EvaluatedData.Attribute.GetUProperty();

	// Is Damage about to be applied?
	if (DamageProperty == ModifiedProperty)
	{
		AGSMModularCharacter* MyCharacter = CastChecked<AGSMModularCharacter>(GetOwningAbilitySystemComponent()->GetAvatarActor());
		float NewMagnitude = Data.EvaluatedData.Magnitude;
		const UGSMAttributeSet* SourceAttributes = Data.EffectSpec.GetContext().GetOriginalInstigatorAbilitySystemComponent()->GetSet<UGSMAttributeSet>();

		AGSMModularCharacter* WhoAttackedUsLast = Cast<AGSMModularCharacter>(Data.EffectSpec.GetContext().GetOriginalInstigatorAbilitySystemComponent()->GetOwner());

		FGameplayTagContainer EffectTags;
		Data.EffectSpec.GetAllAssetTags(EffectTags);

		MyCharacter->CalculateUpdatedDamage(Data.EvaluatedData.Magnitude, SourceAttributes, EffectTags, NewMagnitude);

		Data.EvaluatedData.Magnitude = NewMagnitude;

		if (NewMagnitude > 0.f)
		{
			AGSMModularCharacter* DamagedCharacter = Cast<AGSMModularCharacter>(GetOwningAbilitySystemComponent()->GetAvatarActor());
			if (DamagedCharacter)
			{
				DamagedCharacter->OnTakeDamage(WhoAttackedUsLast, NewMagnitude);

				if (WhoAttackedUsLast)
				{
					AGSMModularCharacter* AttackingCharacter = Cast<AGSMModularCharacter>(WhoAttackedUsLast);

					if (AttackingCharacter)
					{
						AttackingCharacter->OnInflictDamage(DamagedCharacter, NewMagnitude);
					}
				}
			}
		}
	}

	// Save the current health
	HealthBeforeAttributeChange = GetHealth();
	MaxHealthBeforeAttributeChange = GetMaxHealth();
	return true;
}

void UGSMAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data)
{
Super::PostGameplayEffectExecute(Data);

	static FProperty* DamageProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Damage));
	static FProperty* HealingProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Healing));
	static FProperty* ManaProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Mana));
	static FProperty* StaminaProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Stamina));
	FProperty* ModifiedProperty = Data.EvaluatedData.Attribute.GetUProperty();

	//Data.EffectSpec.CapturedTargetTags
	float MinimumHealth = 0.0f;
	const FGameplayEffectContextHandle& EffectContext = Data.EffectSpec.GetEffectContext();
	AActor* Instigator = EffectContext.GetOriginalInstigator();
	AActor* Causer = EffectContext.GetEffectCauser();
	
	// What property was modified?
	if (DamageProperty == ModifiedProperty)
	{
		// Treat damage as minus health
		SetHealth(FMath::Clamp(GetHealth() - Damage.GetCurrentValue(), MinimumHealth, GetMaxHealth()));
		Damage = 0.f;
	}

	if (HealingProperty == ModifiedProperty)
	{
		SetHealth(FMath::Clamp(GetHealth() + Healing.GetCurrentValue(), MinimumHealth, GetMaxHealth()));
		Healing = 0.f;
	}

	if (ManaProperty == ModifiedProperty)
	{
		SetMana(FMath::Clamp(GetMana(), 0.f, GetMaxMana()));
		//Mana.SetBaseValue(FMath::Clamp(Mana.GetCurrentValue(), 0.f, Mana.GetCurrentValue()));
		//Mana.SetCurrentValue(FMath::Clamp(Mana.GetCurrentValue(), 0.f, MaxMana.GetCurrentValue()));
		//Mana = FMath::Clamp(Mana, 0.f, MaxMana);
	}

	if (StaminaProperty == ModifiedProperty)
	{
		SetStamina(FMath::Clamp(GetStamina(), 0.f, GetMaxStamina()));
		//Stamina.SetCurrentValue(FMath::Clamp(Stamina.GetCurrentValue(), 0.f, MaxStamina.GetCurrentValue()));
		//Stamina = FMath::Clamp(Stamina, 0.f, MaxStamina);
	}

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		// Clamp and fall into out of health handling below
		SetHealth(FMath::Clamp(GetHealth(), MinimumHealth, GetMaxHealth()));
	}
	
	
	// If health has actually changed activate callbacks
	if (GetHealth() != HealthBeforeAttributeChange)
	{
		OnHealthChanged.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, HealthBeforeAttributeChange, GetHealth());
	}
	
	//Dead
	if ((GetHealth() <= 0.0f) && !bOutOfHealth)
	{
		FName DeadTagName = FName(TEXT("Combat.State.Dead"));
		FGameplayTag DeadTag = UGameplayTagsManager::Get().RequestGameplayTag(DeadTagName);

		AGSMModularCharacter* MyCharacter = Cast<AGSMModularCharacter>(GetOwningActor());
		if (MyCharacter && !MyCharacter->GetAbilitySystemComponent()->HasAnyMatchingGameplayTags(FGameplayTagContainer(DeadTag)))
		{
			UE_LOG(LogTemp, Warning, TEXT("DEAD!"));
			MyCharacter->OnDeath();
		}
		OnOutOfHealth.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, HealthBeforeAttributeChange, GetHealth());
	}

	// Check health again in case an event above changed it.
	bOutOfHealth = (GetHealth() <= 0.0f);
}


void UGSMAttributeSet::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, HealthRegenRate, COND_None, REPNOTIFY_Always);	
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, Mana, COND_None, REPNOTIFY_Always);	
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, ManaRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, MaxStamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, StaminaRegenRate, COND_None, REPNOTIFY_Always);
}


void UGSMAttributeSet::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty)
{
UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilityComp)
{
// Change current value to maintain the current Val / Max percent
const float CurrentValue = AffectedAttribute.GetCurrentValue();
float NewDelta = (CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}

void UGSMAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
// This is called whenever attributes change, so for max health/mana we want to scale the current totals to match
Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetMaxHealthAttribute())
	{
		AdjustAttributeForMaxChange(Health, MaxHealth, NewValue, GetHealthAttribute());
	}
	else if (Attribute == GetMaxManaAttribute())
	{
		AdjustAttributeForMaxChange(Mana, MaxMana, NewValue, GetManaAttribute());
	}
	else if (Attribute == GetMaxStaminaAttribute())
	{
		AdjustAttributeForMaxChange(Stamina, MaxStamina, NewValue, GetStaminaAttribute());
	}
}

void UGSMAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
Super::PreAttributeBaseChange(Attribute, NewValue);

}

void UGSMAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == GetMaxHealthAttribute())
	{
		// Make sure current health is not greater than the new max health.
		if (GetHealth() > NewValue)
		{
			UGSMAbilitySystemComponent* LyraASC = Cast<UGSMAbilitySystemComponent>(GetOwningAbilitySystemComponent());
			check(LyraASC);

			LyraASC->ApplyModToAttribute(GetHealthAttribute(), EGameplayModOp::Override, NewValue);
		}
	}

	if (bOutOfHealth && (GetHealth() > 0.0f))
	{
		bOutOfHealth = false;
	}
}
```
when i apply a gameplayeffect that use damage attribute, it goes to PreGameplayEffectExecute, to calculate the calculatedupdateddamage, and and then with the new magnitude, use that in ontakedamage and oninflictdamage, right now, ontakedamage and oninflictdamage is use for debugging and possibly for ui visualization.

on PostGameplayEffectExecute, we basically on damageproperty, set the health value by subtracting the damage.

the function calculatedupdateddamage, ontakedamage and oninflictdamage lives in GSMModularCharacter:
.h:
```cpp
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "GameplayTagAssetInterface.h"
#include "GameFramework/Character.h"
#include "GSMModularCharacter.generated.h"

class UGSMAbilitySystemComponent;
class UObject;

/** Minimal class that supports extension by game feature plugins */
UCLASS(Blueprintable)
class GASMAGICIAN_API AGSMModularCharacter : public ACharacter, public IAbilitySystemInterface, public IGameplayCueInterface, public IGameplayTagAssetInterface
{
GENERATED_BODY()

public:
AGSMModularCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~ Begin IAbilitySystemInterface overrides
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~ End IAbilitySystemInterface overrides

	//~ Begin IGameplayTagAssetInterface overrides
	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
	virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;
	virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	//~ End IGameplayTagAssetInterface overrides
	
	//~ Begin AActor Interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// Only called on the Server. Calls before Server's AcknowledgePossession.
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual void OnRep_Controller() override;
	//~ End AActor Interface

	UFUNCTION(BlueprintImplementableEvent, Category = "Damage")
	void CalculateUpdatedDamage(float OriginalDamage, const UGSMAttributeSet* SourceAttributes, FGameplayTagContainer EffectTags, float& NewDamage);

	UFUNCTION(BlueprintImplementableEvent, Category = Combat)
	void OnDeath();
	UFUNCTION(BlueprintImplementableEvent, Category = Combat)
	void OnTakeDamage(AGSMModularCharacter* WhoAttackedMe, float DamageAmount);
	UFUNCTION(BlueprintImplementableEvent, Category = Combat)
	void OnInflictDamage(AGSMModularCharacter* WhoWasDamaged, float DamageAmount);

protected:

	UPROPERTY(Category = AbilitySystem, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UGSMAbilitySystemComponent> AbilitySystemComponent;
};
```

here HealthComponent HealthComponent which handle health related stuff:
.h:
```cpp
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/GameFrameworkComponent.h"

#include "GSMHealthComponent.generated.h"

class UGSMHealthComponent;

class UGSMAbilitySystemComponent;
class UGSMAttributeSet;
class UObject;
struct FFrame;
struct FGameplayEffectSpec;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSMHealth_DeathEvent, AActor*, OwningActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGSMHealth_AttributeChanged, UGSMHealthComponent*, HealthComponent, float, OldValue, float, NewValue, AActor*, Instigator);

/**
* EGSMDeathState
*
*	Defines current state of death.
     */
     UENUM(BlueprintType)
     enum class EGSMDeathState : uint8
     {
     NotDead = 0,
     DeathStarted,
     DeathFinished
     };


/**
* UGSMHealthComponent
*
*	An actor component used to handle anything related to health.
     */
     UCLASS(Blueprintable, Meta=(BlueprintSpawnableComponent))
     class GASMAGICIAN_API UGSMHealthComponent : public UGameFrameworkComponent
     {
     GENERATED_BODY()

public:

	UGSMHealthComponent(const FObjectInitializer& ObjectInitializer);

	// Returns the health component if one exists on the specified actor.
	UFUNCTION(BlueprintPure, Category = "GASMagician|Health")
	static UGSMHealthComponent* FindHealthComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UGSMHealthComponent>() : nullptr); }

	// Initialize the component using an ability system component.
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Health")
	void InitializeWithAbilitySystem(UGSMAbilitySystemComponent* InASC);

	// Uninitialize the component, clearing any references to the ability system.
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Health")
	void UninitializeFromAbilitySystem();

	// Returns the current health value.
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Health")
	float GetHealth() const;

	// Returns the current maximum health value.
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Health")
	float GetMaxHealth() const;

	// Returns the current health in the range [0.0, 1.0].
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Health")
	float GetHealthNormalized() const;

	UFUNCTION(BlueprintCallable, Category = "GASMagician|Health")
	EGSMDeathState GetDeathState() const { return DeathState; }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "GASMagician|Health", Meta = (ExpandBoolAsExecs = "ReturnValue"))
	bool IsDeadOrDying() const { return (DeathState > EGSMDeathState::NotDead); }

	// Begins the death sequence for the owner.
	virtual void StartDeath();

	// Ends the death sequence for the owner.
	virtual void FinishDeath();

	// Applies enough damage to kill the owner.
	virtual void DamageSelfDestruct(bool bFellOutOfWorld = false);

public:

	// Delegate fired when the health value has changed. This is called on the client but the instigator may not be valid
	UPROPERTY(BlueprintAssignable)
	FGSMHealth_AttributeChanged OnHealthChanged;

	// Delegate fired when the max health value has changed. This is called on the client but the instigator may not be valid
	UPROPERTY(BlueprintAssignable)
	FGSMHealth_AttributeChanged OnMaxHealthChanged;

	// Delegate fired when the death sequence has started.
	UPROPERTY(BlueprintAssignable)
	FGSMHealth_DeathEvent OnDeathStarted;

	// Delegate fired when the death sequence has finished.
	UPROPERTY(BlueprintAssignable)
	FGSMHealth_DeathEvent OnDeathFinished;

protected:

	virtual void OnUnregister() override;

	void ClearGameplayTags();

	virtual void HandleHealthChanged(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue);
	virtual void HandleMaxHealthChanged(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue);
	virtual void HandleOutOfHealth(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue);

	UFUNCTION()
	virtual void OnRep_DeathState(EGSMDeathState OldDeathState);

protected:

	// Ability system used by this component.
	UPROPERTY()
	TObjectPtr<UGSMAbilitySystemComponent> AbilitySystemComponent;

	// Health set used by this component.
	UPROPERTY()
	TObjectPtr<const UGSMAttributeSet> HealthSet;

	// Replicated state used to handle dying.
	UPROPERTY(ReplicatedUsing = OnRep_DeathState)
	EGSMDeathState DeathState;
};
```
.cpp:
```cpp
// Copyright Epic Games, Inc. All Rights Reserved.

#include "Components/GSMHealthComponent.h"

#include "GSMGameplayLog.h"
#include "AttributeSets/GSMAttributeSet.h"
#include "Components/GSMAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GSMHealthComponent)

UGSMHealthComponent::UGSMHealthComponent(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
PrimaryComponentTick.bStartWithTickEnabled = false;
PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);

	AbilitySystemComponent = nullptr;
	HealthSet = nullptr;
	DeathState = EGSMDeathState::NotDead;
}

void UGSMHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGSMHealthComponent, DeathState);
}

void UGSMHealthComponent::OnUnregister()
{
UninitializeFromAbilitySystem();

	Super::OnUnregister();
}

void UGSMHealthComponent::InitializeWithAbilitySystem(UGSMAbilitySystemComponent* InASC)
{
AActor* Owner = GetOwner();
check(Owner);

	if (AbilitySystemComponent)
	{
		UE_LOG(LogGASMagician, Error, TEXT("GSMHealthComponent: Health component for owner [%s] has already been initialized with an ability system."), *GetNameSafe(Owner));
		return;
	}

	AbilitySystemComponent = InASC;
	if (!AbilitySystemComponent)
	{
		UE_LOG(LogGASMagician, Error, TEXT("GSMHealthComponent: Cannot initialize health component for owner [%s] with NULL ability system."), *GetNameSafe(Owner));
		return;
	}

	HealthSet = AbilitySystemComponent->GetSet<UGSMAttributeSet>();
	if (!HealthSet)
	{
		UE_LOG(LogGASMagician, Error, TEXT("GSMHealthComponent: Cannot initialize health component for owner [%s] with NULL health set on the ability system."), *GetNameSafe(Owner));
		return;
	}

	// Register to listen for attribute changes.
	HealthSet->OnHealthChanged.AddUObject(this, &ThisClass::HandleHealthChanged);
	HealthSet->OnMaxHealthChanged.AddUObject(this, &ThisClass::HandleMaxHealthChanged);
	HealthSet->OnOutOfHealth.AddUObject(this, &ThisClass::HandleOutOfHealth);

	// TEMP: Reset attributes to default values.  Eventually this will be driven by a spread sheet.
	AbilitySystemComponent->SetNumericAttributeBase(UGSMAttributeSet::GetHealthAttribute(), HealthSet->GetMaxHealth());

	ClearGameplayTags();

	OnHealthChanged.Broadcast(this, HealthSet->GetHealth(), HealthSet->GetHealth(), nullptr);
	OnMaxHealthChanged.Broadcast(this, HealthSet->GetHealth(), HealthSet->GetHealth(), nullptr);
}

void UGSMHealthComponent::UninitializeFromAbilitySystem()
{
ClearGameplayTags();

	if (HealthSet)
	{
		HealthSet->OnHealthChanged.RemoveAll(this);
		HealthSet->OnMaxHealthChanged.RemoveAll(this);
		HealthSet->OnOutOfHealth.RemoveAll(this);
	}

	HealthSet = nullptr;
	AbilitySystemComponent = nullptr;
}

void UGSMHealthComponent::ClearGameplayTags()
{
if (AbilitySystemComponent)
{
//AbilitySystemComponent->SetLooseGameplayTagCount(LyraGameplayTags::Status_Death_Dying, 0);
//AbilitySystemComponent->SetLooseGameplayTagCount(LyraGameplayTags::Status_Death_Dead, 0);
}
}

float UGSMHealthComponent::GetHealth() const
{
return (HealthSet ? HealthSet->GetHealth() : 0.0f);
}

float UGSMHealthComponent::GetMaxHealth() const
{
return (HealthSet ? HealthSet->GetMaxHealth() : 0.0f);
}

float UGSMHealthComponent::GetHealthNormalized() const
{
if (HealthSet)
{
const float Health = HealthSet->GetHealth();
const float MaxHealth = HealthSet->GetMaxHealth();

		return ((MaxHealth > 0.0f) ? (Health / MaxHealth) : 0.0f);
	}

	return 0.0f;
}

void UGSMHealthComponent::HandleHealthChanged(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue)
{
OnHealthChanged.Broadcast(this, OldValue, NewValue, DamageInstigator);
}

void UGSMHealthComponent::HandleMaxHealthChanged(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue)
{
OnMaxHealthChanged.Broadcast(this, OldValue, NewValue, DamageInstigator);
}

void UGSMHealthComponent::HandleOutOfHealth(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec* DamageEffectSpec, float DamageMagnitude, float OldValue, float NewValue)
{
}

void UGSMHealthComponent::OnRep_DeathState(EGSMDeathState OldDeathState)
{
const EGSMDeathState NewDeathState = DeathState;

	// Revert the death state for now since we rely on StartDeath and FinishDeath to change it.
	DeathState = OldDeathState;

	if (OldDeathState > NewDeathState)
	{
		// The server is trying to set us back but we've already predicted past the server state.
		UE_LOG(LogGASMagician, Warning, TEXT("GSMHealthComponent: Predicted past server death state [%d] -> [%d] for owner [%s]."), (uint8)OldDeathState, (uint8)NewDeathState, *GetNameSafe(GetOwner()));
		return;
	}

	if (OldDeathState == EGSMDeathState::NotDead)
	{
		if (NewDeathState == EGSMDeathState::DeathStarted)
		{
			StartDeath();
		}
		else if (NewDeathState == EGSMDeathState::DeathFinished)
		{
			StartDeath();
			FinishDeath();
		}
		else
		{
			UE_LOG(LogGASMagician, Error, TEXT("GSMHealthComponent: Invalid death transition [%d] -> [%d] for owner [%s]."), (uint8)OldDeathState, (uint8)NewDeathState, *GetNameSafe(GetOwner()));
		}
	}
	else if (OldDeathState == EGSMDeathState::DeathStarted)
	{
		if (NewDeathState == EGSMDeathState::DeathFinished)
		{
			FinishDeath();
		}
		else
		{
			UE_LOG(LogGASMagician, Error, TEXT("GSMHealthComponent: Invalid death transition [%d] -> [%d] for owner [%s]."), (uint8)OldDeathState, (uint8)NewDeathState, *GetNameSafe(GetOwner()));
		}
	}

	ensureMsgf((DeathState == NewDeathState), TEXT("GSMHealthComponent: Death transition failed [%d] -> [%d] for owner [%s]."), (uint8)OldDeathState, (uint8)NewDeathState, *GetNameSafe(GetOwner()));
}

void UGSMHealthComponent::StartDeath()
{
if (DeathState != EGSMDeathState::NotDead)
{
return;
}

	DeathState = EGSMDeathState::DeathStarted;

	if (AbilitySystemComponent)
	{
		//AbilitySystemComponent->SetLooseGameplayTagCount(LyraGameplayTags::Status_Death_Dying, 1);
	}

	AActor* Owner = GetOwner();
	check(Owner);

	OnDeathStarted.Broadcast(Owner);

	Owner->ForceNetUpdate();
}

void UGSMHealthComponent::FinishDeath()
{
if (DeathState != EGSMDeathState::DeathStarted)
{
return;
}

	DeathState = EGSMDeathState::DeathFinished;

	if (AbilitySystemComponent)
	{
		//AbilitySystemComponent->SetLooseGameplayTagCount(LyraGameplayTags::Status_Death_Dead, 1);
	}

	AActor* Owner = GetOwner();
	check(Owner);

	OnDeathFinished.Broadcast(Owner);

	Owner->ForceNetUpdate();
}

void UGSMHealthComponent::DamageSelfDestruct(bool bFellOutOfWorld)
{
if ((DeathState == EGSMDeathState::NotDead) && AbilitySystemComponent)
{
/*const TSubclassOf<UGameplayEffect> DamageGE = ULyraAssetManager::GetSubclass(ULyraGameData::Get().DamageGameplayEffect_SetByCaller);
if (!DamageGE)
{
UE_LOG(LogGASMagician, Error, TEXT("LyraHealthComponent: DamageSelfDestruct failed for owner [%s]. Unable to find gameplay effect [%s]."), *GetNameSafe(GetOwner()), *ULyraGameData::Get().DamageGameplayEffect_SetByCaller.GetAssetName());
return;
}

		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(DamageGE, 1.0f, AbilitySystemComponent->MakeEffectContext());
		FGameplayEffectSpec* Spec = SpecHandle.Data.Get();

		if (!Spec)
		{
			UE_LOG(LogGASMagician, Error, TEXT("LyraHealthComponent: DamageSelfDestruct failed for owner [%s]. Unable to make outgoing spec for [%s]."), *GetNameSafe(GetOwner()), *GetNameSafe(DamageGE));
			return;
		}

		Spec->AddDynamicAssetTag(TAG_Gameplay_DamageSelfDestruct);

		if (bFellOutOfWorld)
		{
			Spec->AddDynamicAssetTag(TAG_Gameplay_FellOutOfWorld);
		}

		const float DamageAmount = GetMaxHealth();

		Spec->SetSetByCallerMagnitude(LyraGameplayTags::SetByCaller_Damage, DamageAmount);
		AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*Spec);*/
	}
}
```

# Risk Of Rain Damage Pipeline
here is risk of rain damage pipeline:
Damage
Gameplay Damage Container
Inspired by Epic’s Action RPG Sample FGameplayEffectContainer, Damage Containers are the primary way to do damage using Skills. It saves the effort of manually creating the required GameplayEffectExecutionCalculations and setting the base damage multiplier, while also creating an easy way to pass damage to be applied on projectiles.

Most important, however, is handling the Damage Pipeline and abstracting it from game designers. As explained in more detail in the next subsection, the Damage Pipeline needs a DamageCalculationEffect and a DamageApplicationEffect, which is obtained by either passing both classes as a parameter when creating a DamageContainerSpec or simply using the ones assigned to the Skill.

Damage Container BP Functions

Damage Pipeline
The Damage Pipeline is the sequence of steps necessary to inflict damage. The need for a more complex system, in contrast to how Unreal’s Lyra Sample Project handles damage, comes from the nature of the flexible modifiers in Risk of Rain.

While the BaseDamage attribute is associated with the character and only ever changes when leveling up, the TotalDamage attribute is the final value used to inflict damage and is altered by an arbitrary number of items and/or passive skills. For this reason, unlike Lyra, the modifiers are not hardcoded in the GameplayEffectExecutionCalculation and are instead added in response to the Event.BeforeDamage event, after the DamageCalculationEffect is applied.

This enables designers to modify the TotalDamage attribute before the final calculation, based on the target’s information, such as its position, health percentage, animation state, and so on. See Bandit’s Passive for a practical example. The following is a chart to illustrate how the Damage Pipeline works:

Damage Pipeline

In summary:

The Damage Pipeline begins when a DamageContainer is applied.
The DamageCalculationEffect is applied to the instigator. Its job is to calculate the TotalDamage based on the BaseDamage, compute whether the damage is a critical hit, and fire the BeforeDamage event.
Passive skills and items react to the BeforeDamage event, modifying the TotalDamage.
The DamageExecutionffect is applied to the target. Its job is to modify the target’s shield and health based on the instigator’s TotalDamage and the target’s armor. Also fires the Hit event.
On-hit Passive skills and items react to the On-Hit event.
The Skills section contains lots of examples of how to use the Damage Container, while the Item proccing section demonstrates some on-hit reactions.

# How to Use

In Old Damage system, we have a statics to apply the damage, this is done from the instigator. then in receiving actor, we can call any of tkae damage event such as takedamage,radialdamage and point damage
