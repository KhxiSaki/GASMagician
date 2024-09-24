// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile/GSMProjectile.h"


// Sets default values
AGSMProjectile::AGSMProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGSMProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGSMProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

