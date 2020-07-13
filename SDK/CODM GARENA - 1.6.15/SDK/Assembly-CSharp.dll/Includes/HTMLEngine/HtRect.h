#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class HtRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "HtRect"));
	}

	template <typename T = int32_t> T& X() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Offset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_Left() {
		return ((T (*)(HtRect*))(Il2CppBase() + 0x47674D8))(this);
	}
	template <typename T = int32_t> T get_Right() {
		return ((T (*)(HtRect*))(Il2CppBase() + 0x47674E0))(this);
	}
	template <typename T = int32_t> T get_Top() {
		return ((T (*)(HtRect*))(Il2CppBase() + 0x47674F0))(this);
	}
	template <typename T = int32_t> T get_Bottom() {
		return ((T (*)(HtRect*))(Il2CppBase() + 0x47674F8))(this);
	}
	template <typename T = uintptr_t> T Offset(int32_t dx, int32_t dy) {
		return ((T (*)(HtRect*, int32_t, int32_t))(Il2CppBase() + 0x4767508))(this, dx, dy);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HtRect*))(Il2CppBase() + 0x476786C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(HtRect*))(Il2CppBase() + 0x4767924))(this);
	}

};

}
