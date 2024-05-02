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
	//DetailBuilder.GetObjectsBeingCustomized(ObjectsToEdit);
	IDetailCategoryBuilder& Category = DetailBuilder.EditCategory("Ivy Function",FText::GetEmpty(),ECategoryPriority::Important);
	Category.SetCategoryVisibility(true
);

	IDetailCategoryBuilder& Category2 = DetailBuilder.EditCategory("Rendering",FText::GetEmpty(),ECategoryPriority::Default);
	Category2.SetCategoryVisibility(false
);
	
	IDetailCategoryBuilder& Category3 = DetailBuilder.EditCategory("Networking",FText::GetEmpty(),ECategoryPriority::Default);
	Category3.SetCategoryVisibility(false
);

	IDetailCategoryBuilder& Category4 = DetailBuilder.EditCategory("Cooking",FText::GetEmpty(),ECategoryPriority::Default);
	Category4.SetCategoryVisibility(false
);

	IDetailCategoryBuilder& Category5 = DetailBuilder.EditCategory("Actor",FText::GetEmpty(),ECategoryPriority::Default);
	Category5.SetCategoryVisibility(false
);

	IDetailCategoryBuilder& Category6 = DetailBuilder.EditCategory("Input",FText::GetEmpty(),ECategoryPriority::Default);
	Category6.SetCategoryVisibility(false
);
	
	IDetailCategoryBuilder& Category7 = DetailBuilder.EditCategory("HLOD",FText::GetEmpty(),ECategoryPriority::Default);
	Category7.SetCategoryVisibility(false
);
	
	IDetailCategoryBuilder& Category8 = DetailBuilder.EditCategory("Replication",FText::GetEmpty(),ECategoryPriority::Default);
	Category8.SetCategoryVisibility(false
);

	IDetailCategoryBuilder& Category9 = DetailBuilder.EditCategory("Collision",FText::GetEmpty(),ECategoryPriority::Default);
	Category9.SetCategoryVisibility(false
);
	
	IDetailCategoryBuilder& Category10 = DetailBuilder.EditCategory("Physics",FText::GetEmpty(),ECategoryPriority::Default);
	Category10.SetCategoryVisibility(false
);

	

	/*Category.AddCustomRow(LOCTEXT("Keyword", "Yolo"))
   .NameContent()
   [
	   SNew(STextBlock)
	   .Text(LOCTEXT("NameText","Delete Stem"))
	   .Font(IDetailLayoutBuilder::GetDetailFont())
   ]
   .ValueContent()
   [
	   SNew(SButton)
	   .Text(LOCTEXT("ButtonText","Generate Leaves"))
	   .OnClicked_Raw(this, &FIvyModulDetails::DeleteStem)
   ];*/
}

FReply FIvyModulDetails::DeleteStem()
{
	
	//AIvyStatic::ClearSplinePoints();
	
	return FReply::Handled();
}


#undef LOCTEXT_NAMESPACE 