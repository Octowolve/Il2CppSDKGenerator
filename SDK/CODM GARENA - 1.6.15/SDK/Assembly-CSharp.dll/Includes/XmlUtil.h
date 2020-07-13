#pragma once
#include <Il2Cpp/Il2Cpp.h>

class XmlUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "XmlUtil"));
	}

	template <typename T = uintptr_t> static T& m_XmlWriterSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Save() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOrCreateChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_XmlWriterSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DD6250))(0);
	}
	template <typename T = void> static T Save(Il2CppString* path, uintptr_t doc) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DD63EC))(0, path, doc);
	}
	template <typename T = uintptr_t> static T Load(Il2CppString* filePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DD69EC))(0, filePath);
	}
	template <typename T = uintptr_t> static T GetOrCreateChild(uintptr_t parent, uintptr_t doc, Il2CppString* xpath) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DD6AE4))(0, parent, doc, xpath);
	}

};

}
