#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class PlayerIconItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "PlayerIconItemView"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Frame() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SelectedState() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Showed() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RedPoint() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& NotReceive() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NewTag() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ObjTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedDotState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetData(uintptr_t iconData, int32_t index) {
		return ((T (*)(PlayerIconItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x2915FD0))(this, iconData, index);
	}
	template <typename T = void> T SetRedDotState(uintptr_t state) {
		return ((T (*)(PlayerIconItemView*, uintptr_t))(Il2CppBase() + 0x2916BE4))(this, state);
	}

};

}
