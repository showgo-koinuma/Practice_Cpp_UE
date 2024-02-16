#include "FirstRiderActor.h"

AFirstRiderActor::AFirstRiderActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFirstRiderActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Hello Rider World!"));
}

void AFirstRiderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

