// Fill out your copyright notice in the Description page of Project Settings.


#include "DetailsActorDetailCustomization.h"

#include "DetailsModule/DetailsActor.h"
#if WITH_EDITOR

#include "Editor/PropertyEditor/Public/DetailLayoutBuilder.h"
#include "Editor/PropertyEditor/Public/DetailCategoryBuilder.h"
#include "Editor/PropertyEditor/Public/DetailWidgetRow.h"
#include "Runtime/Slate/Public/Widgets/Text/STextBlock.h"
#include "Runtime/Slate/Public/Widgets/Input/SButton.h"

#include "IvyStatic.h"

#define LOCTEXT_NAMESPACE "DetailsActorCustomDetails"
TSharedRef<IDetailCustomization> FDetailsActorDetailCustomization::MakeInstance()
{
	return MakeShareable(new FDetailsActorDetailCustomization);
}
void FDetailsActorDetailCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	IDetailCategoryBuilder& Category = DetailBuilder.EditCategory("Spline",FText::GetEmpty(),ECategoryPriority::Important);
	ADetailsActor* DetailsActor = nullptr;
	TArray<TWeakObjectPtr<UObject>> CustomizedObjects;
	DetailBuilder.GetObjectsBeingCustomized(CustomizedObjects);
	for(TWeakObjectPtr<UObject>Object : CustomizedObjects)
	{
		if(Object.IsValid())
		{
			DetailsActor = Cast<ADetailsActor>(Object);
			if(DetailsActor)
				break;
		}
	}
	check (DetailsActor);

	Category.AddCustomRow(LOCTEXT("RowSearchName","Magic"))
	.NameContent()
	[
		SNew(STextBlock)
		.Text(LOCTEXT("DetailName","Cool Button ---->"))
		.Font(IDetailLayoutBuilder::GetDetailFont())
	]
	.ValueContent()
	[
		SNew(SButton)
		.Text(LOCTEXT("ButtonText","Hello"))
		.HAlign(HAlign_Center)
		.ToolTipText(LOCTEXT("ButtonTooltip","OH YES DADDY"))
	];

	
}
#undef LOCTEXT_NAMESPACE

#endif

