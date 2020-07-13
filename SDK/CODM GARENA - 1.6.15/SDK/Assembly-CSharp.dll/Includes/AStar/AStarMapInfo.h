#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AStar {

class AStarMapInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AStar", "AStarMapInfo"));
	}

	template <typename T = Il2CppVector2> T& Origin() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& WidthCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& HeightCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Ratio() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& HeightOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWorldPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector3> T GetWorldPos(int32_t widthIndex, int32_t heightIndex) {
		return ((T (*)(AStarMapInfo*, int32_t, int32_t))(Il2CppBase() + 0x22D58B8))(this, widthIndex, heightIndex);
	}
	template <typename T = void> T GetIndex(Il2CppVector2 worldPos, uintptr_t* widthIndex, uintptr_t* heightIndex) {
		return ((T (*)(AStarMapInfo*, Il2CppVector2, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x22D5A18))(this, worldPos, widthIndex, heightIndex);
	}

};

}
