#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class UniqueKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "UniqueKey"));
	}

	template <typename T = uint32_t> static T& PrefixName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& NameItems() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& KeyBaseType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uint32_t> T GetNewKey(uint32_t BaseName) {
		return ((T (*)(UniqueKey*, uint32_t))(Il2CppBase() + 0x40573D4))(this, BaseName);
	}

};

}
