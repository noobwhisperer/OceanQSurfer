// OQSWaveActor.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OQSWaveActor.generated.h"

UCLASS()
class OCEANQSURFER_API AOQSWaveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOQSWaveActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
protected:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;

	
};
