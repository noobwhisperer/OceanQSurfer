// OQSWaveActor.cpp


#include "OQSWaveActor.h"


AOQSWaveActor::AOQSWaveActor()
{
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
	RootComponent = BaseMesh;

}

void AOQSWaveActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AOQSWaveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

