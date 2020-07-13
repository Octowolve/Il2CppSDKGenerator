#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class IDataRecordAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "IDataRecordAction"));
	}

	template <typename T = uintptr_t> T& IDataType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Status() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(IDataRecordAction*))(Il2CppBase() + 0x3957DE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(IDataRecordAction*))(Il2CppBase() + 0x3957EEC))(this);
	}

};

}
