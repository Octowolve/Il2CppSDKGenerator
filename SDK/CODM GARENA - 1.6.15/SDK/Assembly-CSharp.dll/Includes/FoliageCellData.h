#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageCellData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageCellData"));
	}

	template <typename T = uintptr_t> T& cell() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& typeHashInstanceData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& visible() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_bounds() {
		return ((T (*)(FoliageCellData*))(Il2CppBase() + 0x3CD29DC))(this);
	}
	template <typename T = bool> T get_visible() {
		return ((T (*)(FoliageCellData*))(Il2CppBase() + 0x3CD29F4))(this);
	}
	template <typename T = void> T set_visible(bool value) {
		return ((T (*)(FoliageCellData*, bool))(Il2CppBase() + 0x3CD29FC))(this, value);
	}
	template <typename T = void> T SetVisible(bool _visible) {
		return ((T (*)(FoliageCellData*, bool))(Il2CppBase() + 0x3CD2A04))(this, _visible);
	}

};

}
