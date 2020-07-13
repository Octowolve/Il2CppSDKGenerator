#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHoudiniAssetFoliageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HoudiniAssetFoliageComponent"));
	}

	template <typename T = uintptr_t> T& TerrainComponentRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _treeList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _grassList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rockList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _protoTypeList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& _protoTypeIndexDic() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_TreeList() {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*))(Il2CppBase() + 0x2BD0DF4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_GrassList() {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*))(Il2CppBase() + 0x2BD0DFC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RockList() {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*))(Il2CppBase() + 0x2BD0E04))(this);
	}
	template <typename T = void> T ProcessParam() {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*))(Il2CppBase() + 0x2BD0E0C))(this);
	}
	template <typename T = void> T AddInstance(Il2CppString* instanceName, Il2CppVector3 instancePosition, Il2CppVector3 instanceNormal, float scale) {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*, Il2CppString*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x2BD0F44))(this, instanceName, instancePosition, instanceNormal, scale);
	}
	template <typename T = void> T ExportToTerrain() {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*))(Il2CppBase() + 0x2BD18BC))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*))(Il2CppBase() + 0x2BD2E00))(this);
	}
	template <typename T = void> T AddTree(Il2CppString* instanceName, Il2CppVector3 instancePosition, Il2CppVector3 instanceNormal, float scale) {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*, Il2CppString*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x2BD1328))(this, instanceName, instancePosition, instanceNormal, scale);
	}
	template <typename T = void> T AddGrass(Il2CppString* instanceName, Il2CppVector3 instancePosition, Il2CppVector3 instanceNormal, float scale) {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*, Il2CppString*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x2BD1504))(this, instanceName, instancePosition, instanceNormal, scale);
	}
	template <typename T = void> T AddRock(Il2CppString* instanceName, Il2CppVector3 instancePosition, Il2CppVector3 instanceNormal, float scale) {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*, Il2CppString*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x2BD16E0))(this, instanceName, instancePosition, instanceNormal, scale);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTerrainTreeProtoTypes() {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*))(Il2CppBase() + 0x2BD2D68))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTerrainTreeInstancesArray(Il2CppArray<uintptr_t>* terrainBounds) {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2BD1D8C))(this, terrainBounds);
	}
	template <typename T = bool> T CreateProtoType(Il2CppString* instanceName) {
		return ((T (*)(HEUHoudiniAssetFoliageComponent*, Il2CppString*))(Il2CppBase() + 0x2BD1038))(this, instanceName);
	}

};

}
