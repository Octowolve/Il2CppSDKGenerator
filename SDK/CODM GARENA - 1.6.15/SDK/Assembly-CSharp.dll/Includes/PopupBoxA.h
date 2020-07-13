#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PopupBoxA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PopupBoxA"));
	}

	template <typename T = Il2CppVector3> T& CLS_BTN_POS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& CON_BTN_POS() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppQuaternion> T& CON_BTN_ROT() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& CAN_BTN_POS() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppQuaternion> T& CAN_BTN_ROT() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& CT_POS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& MSK_CLR() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
