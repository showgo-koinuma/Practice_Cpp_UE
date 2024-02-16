#include "KienaiActor.h"
#include "Kismet/KismetSystemLibrary.h"

AKienaiActor::AKienaiActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AKienaiActor::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, message);
	UKismetSystemLibrary::PrintString(this, "doumo");
	actor->TestCall();
}

void AKienaiActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

