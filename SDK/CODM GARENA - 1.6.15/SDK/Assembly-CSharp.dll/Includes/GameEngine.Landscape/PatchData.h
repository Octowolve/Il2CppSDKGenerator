#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Landscape {

class PatchData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Landscape", "PatchData"));
	}

	template <typename T = unsigned char> T& quarterFlags() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& selfVisible() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& anyChildShouldBeLoaded() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = uintptr_t> T& loadingState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& heightmapBlockIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int16_t> T& maxHeightValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& distanceToViewpoint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& holeFlag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& lastMaterialIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& lastInstanceIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& lastAnyChildRendered() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& dirtyBit() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearQuarterFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllQuartersVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQuarterVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuarterVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuarterFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T ClearQuarterFlags() {
		return ((T (*)(PatchData*))(Il2CppBase() + 0x24911F4))(this);
	}
	template <typename T = void> T SetAllQuartersVisible() {
		return ((T (*)(PatchData*))(Il2CppBase() + 0x2491298))(this);
	}
	template <typename T = void> T SetQuarterVisible(int32_t index, bool visible) {
		return ((T (*)(PatchData*, int32_t, bool))(Il2CppBase() + 0x249133C))(this, index, visible);
	}
	template <typename T = bool> T GetQuarterVisible(int32_t index) {
		return ((T (*)(PatchData*, int32_t))(Il2CppBase() + 0x2491D44))(this, index);
	}
	template <typename T = int32_t> T GetQuarterFlags() {
		return ((T (*)(PatchData*))(Il2CppBase() + 0x2490A78))(this);
	}
	template <typename T = bool> T NeedRender() {
		return ((T (*)(PatchData*))(Il2CppBase() + 0x2490E1C))(this);
	}

};

}
