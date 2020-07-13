#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneOccluderData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneOccluderData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_Objs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteAsScriptableObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteAsScritableObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadHeightMapScriptObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadOccludersScriptObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExpandData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Add(uintptr_t obj) {
		return ((T (*)(SceneOccluderData*, uintptr_t))(Il2CppBase() + 0x33E964C))(this, obj);
	}
	template <typename T = void> static T WriteAsScriptableObj(Il2CppString* path, uintptr_t obj, int32_t tileid) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x33E972C))(0, path, obj, tileid);
	}
	template <typename T = void> static T WriteAsScritableObj(Il2CppString* path, float unitLen, float xoffsetaddl2W, float zoffsetaddl2W, int32_t xsize, int32_t zsize, Il2CppArray<uintptr_t>* heightmap) {
		return ((T (*)(void *, Il2CppString*, float, float, float, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x33E97E0))(0, path, unitLen, xoffsetaddl2W, zoffsetaddl2W, xsize, zsize, heightmap);
	}
	template <typename T = uintptr_t> static T ReadHeightMapScriptObj(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x33E98B4))(0, path);
	}
	template <typename T = uintptr_t> static T ReadOccludersScriptObj(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x33E99B8))(0, path);
	}
	template <typename T = void> T ExpandData(uintptr_t* nOccluder, Il2CppArray<uintptr_t>** eachOccluderPolyCnts, Il2CppArray<uintptr_t>** eachOccluderAabb, Il2CppArray<uintptr_t>** eachOccluderAabbCenter, Il2CppArray<uintptr_t>** eachPolyPtCnts, Il2CppArray<uintptr_t>** normalForEachPoly, Il2CppArray<uintptr_t>** polyCenters, Il2CppArray<uintptr_t>** points, Il2CppArray<uintptr_t>** IsOnContour) {
		return ((T (*)(SceneOccluderData*, uintptr_t*, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x33E9ABC))(this, nOccluder, eachOccluderPolyCnts, eachOccluderAabb, eachOccluderAabbCenter, eachPolyPtCnts, normalForEachPoly, polyCenters, points, IsOnContour);
	}

};

}
