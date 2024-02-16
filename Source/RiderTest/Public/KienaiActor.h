#pragma once

#include "CoreMinimal.h"
#include "FirstRiderActor.h"
#include "GameFramework/Actor.h"
#include "KienaiActor.generated.h"

UCLASS()
class RIDERTEST_API AKienaiActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AKienaiActor();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
		FString message = "hensuu";
	UPROPERTY(EditAnywhere)
		AFirstRiderActor* actor;

};
