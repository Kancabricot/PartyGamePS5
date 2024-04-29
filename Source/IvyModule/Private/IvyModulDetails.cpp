// Fill out your copyright notice in the Description page of Project Settings.


#include "IvyModulDetails.h"

#include "PropertyEditor/Public/DetailLayoutBuilder.h"
#include "PropertyEditor/Public/DetailCategoryBuilder.h"
#include "PropertyEditor/Public/DetailWidgetRow.h"

#include"Widgets/Text/STextBlock.h"
#include"Widgets/Input/SButton.h"

#include "Input/Reply.h"
#include "IvyStatic.h"

TSharedRef<IDetailCustomization> FIvyModulDetails::MakeInstance()
{
	return MakeShareable(new FIvyModulDetails);
}

#define LOCTEXT_NAMESPACE "IvyModulDetails"
void FIvyModulDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	DetailBuilder.GetObjectsBeingCustomized(ObjectsToEdit);
	
	IDetailCategoryBuilder& Category = DetailBuilder.EditCategory("TestCat",LOCTEXT("CatName","Ivy Settings"),ECategoryPriority::Important);

	 Category.AddCustomRow(LOCTEXT("Keyword", "Shuffle"))
	.NameContent()
	[
		SNew(STextBlock)
		.Text(LOCTEXT("NameText","Reassign Materials"))
		.Font(IDetailLayoutBuilder::GetDetailFont())
	]
	.ValueContent()
	[
		SNew(SButton)
		.Text(LOCTEXT("ButtonText","Shuffle"))
		.OnClicked_Raw(this, &FIvyModulDetails::EditObjects)
	];
}

FReply FIvyModulDetails::EditObjects()
{
	for(TWeakObjectPtr<UObject> Object : ObjectsToEdit)
	{
		if(!Object.IsValid()) continue;

		AIvyStatic* IS = Cast<AIvyStatic>(Object.Get());
		if(!IS) continue;
		
	}


	
	return FReply::Handled();
}


#undef LOCTEXT_NAMESPACE 