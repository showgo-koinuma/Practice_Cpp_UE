#include "KienaiActor.h"
#include "Kismet/KismetSystemLibrary.h"

AKienaiActor::AKienaiActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AKienaiActor::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, "doumo");
}

void AKienaiActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

