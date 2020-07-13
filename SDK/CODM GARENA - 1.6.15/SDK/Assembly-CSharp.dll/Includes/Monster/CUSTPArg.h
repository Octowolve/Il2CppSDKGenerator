#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Monster {

class CUSTPArg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Monster", "CUSTPArg"));
	}

	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& info() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Title() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetType() {
		return ((T (*)(CUSTPArg*))(Il2CppBase() + 0x331BD94))(this);
	}
	template <typename T = Il2CppString*> T Name() {
		return ((T (*)(CUSTPArg*))(Il2CppBase() + 0x331BE70))(this);
	}
	template <typename T = Il2CppString*> T Title() {
		return ((T (*)(CUSTPArg*))(Il2CppBase() + 0x331BF28))(this);
	}
	template <typename T = Il2CppString*> T Info() {
		return ((T (*)(CUSTPArg*))(Il2CppBase() + 0x331BFE0))(this);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t inSrc) {
		return ((T (*)(CUSTPArg*, uintptr_t))(Il2CppBase() + 0x335B184))(this, inSrc);
	}
	template <typename T = void> T SetValue(uintptr_t inDist, uintptr_t inV) {
		return ((T (*)(CUSTPArg*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E8943C))(this, inDist, inV);
	}

};

}
