#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class OcStreamingUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "OcStreamingUtils"));
	}

	template <typename T = int32_t> static T& adjTileReachHalfSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& adjTileBufferSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& tilesize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& harshHelperRowValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& InvalidTileidValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetOccluderTileArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOccluderTileId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOccluderTileDebugCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllocateNearbyTileList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllAdjacentTileId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T ResetOccluderTileArray(Il2CppArray<uintptr_t>* arr) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x271D428))(0, arr);
	}
	template <typename T = int32_t> static T GetOccluderTileId(Il2CppVector3 pos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x271D51C))(0, pos);
	}
	template <typename T = Il2CppVector3> static T GetOccluderTileDebugCenter(Il2CppVector3 pos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x271D658))(0, pos);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AllocateNearbyTileList() {
		return ((T (*)(void *))(Il2CppBase() + 0x271D7C0))(0);
	}
	template <typename T = void> static T GetAllAdjacentTileId(Il2CppVector3 pos, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, Il2CppVector3, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x271D894))(0, pos, buffer);
	}

};

}
