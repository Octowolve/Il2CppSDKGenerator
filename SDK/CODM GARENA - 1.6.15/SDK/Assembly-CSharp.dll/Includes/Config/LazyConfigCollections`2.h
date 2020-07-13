#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LazyConfigCollections2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LazyConfigCollections`2"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_RawData() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_RawDataCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& m_KeyRawPositionDic() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_KeyArray() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ColumnList() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& Dic() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKeyArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalCacheSingle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T Cache() {
		return ((T (*)(LazyConfigCollections2*))(Il2CppBase() + 0x47353F8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetKeyArray() {
		return ((T (*)(LazyConfigCollections2*))(Il2CppBase() + 0x47355EC))(this);
	}
	template <typename T = uintptr_t> T GetData(uintptr_t key) {
		return ((T (*)(LazyConfigCollections2*, uintptr_t))(Il2CppBase() + 0x47356A4))(this, key);
	}
	template <typename T = uintptr_t> T InternalCacheSingle(uintptr_t key) {
		return ((T (*)(LazyConfigCollections2*, uintptr_t))(Il2CppBase() + 0x4735804))(this, key);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LazyConfigCollections2*))(Il2CppBase() + 0x473597C))(this);
	}

};

}
