#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class AutoPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "AutoPool`1"));
	}

	template <typename T = int32_t> static T& kDefaultPoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_iNextIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_arrObjects() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_iTotalCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnUsedObjCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T CreatePool(int32_t iCount) {
		return ((T (*)(AutoPool1*, int32_t))(Il2CppBase() + 0x471EA6C))(this, iCount);
	}
	template <typename T = uintptr_t> T GetAnObject() {
		return ((T (*)(AutoPool1*))(Il2CppBase() + 0x471EC14))(this);
	}
	template <typename T = int32_t> T GetUnUsedObjCount() {
		return ((T (*)(AutoPool1*))(Il2CppBase() + 0x471EF38))(this);
	}
	template <typename T = void> T RecycleObject(uintptr_t pObj) {
		return ((T (*)(AutoPool1*, uintptr_t))(Il2CppBase() + 0x471F134))(this, pObj);
	}

};

}
