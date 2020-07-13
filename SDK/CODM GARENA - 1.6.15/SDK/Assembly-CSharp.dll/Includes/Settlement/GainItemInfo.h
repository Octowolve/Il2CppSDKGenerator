#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class GainItemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "GainItemInfo"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& LiveOpsEvent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseGainItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T ParseGainItems(Il2CppList<uintptr_t>* simpleData) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B2773C))(0, simpleData);
	}

};

}
