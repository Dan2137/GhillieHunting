class CfgPatches
{
	class Ghillie_Proxies
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data"
		};
	};
};
class cfgSlots
{
	class slot_ghillie1
	{
	Name="ghillie1";
	displayName="$STR_cfgvehicles_GhillieBushrag_colorbase0";
	ghostIcon="set:dayz_inventory image:camonet";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyghillieproxy: ProxyAttachment
	{
		scope=2;
		model="ghilliehunting\data\proxies\ghillieproxy.p3d";
		inventorySlot[]=
		{
			"ghillie1"
		};
	};
};	

