class CfgPatches
{
	class GhillieHunting
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Backpacks"
		};
	};
};
class CfgMods
{
	class GhillieHunting
	{
		dir="GhillieHunting";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="GhillieHunting";
		credits="Dan";
		author="Dan";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
	};
};
class cfgVehicles
{
	class Clothing;
	class HuntingBag: Clothing
	{
		hiddenSelectionsTextures[]=
		{
			"ghilliehunting\data\ghillie_backpack_co.paa",
			"ghilliehunting\data\ghillie_backpack_co.paa",
			"ghilliehunting\data\ghillie_backpack_co.paa"
		};
	};
	class HuntingBag_test: HuntingBag
	{
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"ghillie1"
		};
		model="\ghilliehunting\data\ghillie_backpack_g.p3d";
		class ClothingTypes
		{
			male="\ghilliehunting\data\ghillie_backpack_m.p3d";
			female="\ghilliehunting\data\ghillie_backpack_f.p3d";
		};
	};
	class GhillieBushrag_ColorBase: Clothing
	{
		inventorySlot[]=
		{
			"hips",
			"ghillie1"
		};
	};
};

