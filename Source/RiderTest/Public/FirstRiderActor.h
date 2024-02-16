#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FirstRiderActor.generated.h"

UCLASS()
class RIDERTEST_API AFirstRiderActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AFirstRiderActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void TestCall();

};
