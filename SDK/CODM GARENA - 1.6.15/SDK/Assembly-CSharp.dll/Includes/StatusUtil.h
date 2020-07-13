#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusUtil"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& s_BindingFlagsDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> static T& s_showMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Status() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MemberFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TypeFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValueFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> static T Status(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39532EC))(0, obj);
	}
	template <typename T = Il2CppString*> static T GetStatus(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x395340C))(0, obj);
	}
	template <typename T = Il2CppString*> static T MemberFormat(Il2CppString* tag, uintptr_t type, Il2CppString* name, uintptr_t value) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x39541AC))(0, tag, type, name, value);
	}
	template <typename T = Il2CppString*> static T TypeFormat(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3954494))(0, type);
	}
	template <typename T = Il2CppString*> static T ValueFormat(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3954618))(0, value);
	}
	template <typename T = Il2CppString*> static T GetTag(int32_t hashCode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3953DB4))(0, hashCode);
	}

};

}
