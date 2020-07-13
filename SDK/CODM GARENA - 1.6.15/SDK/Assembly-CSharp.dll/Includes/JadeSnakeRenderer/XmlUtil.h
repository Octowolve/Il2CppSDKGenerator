#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class XmlUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "XmlUtil"));
	}

	template <typename T = uintptr_t> static T& m_XmlWriterSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_XmlWriterSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x4923460))(0);
	}
	template <typename T = void> static T Save(Il2CppString* path, uintptr_t doc) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x49235FC))(0, path, doc);
	}
	template <typename T = uintptr_t> static T Load(Il2CppString* filePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4923CD4))(0, filePath);
	}
	template <typename T = uintptr_t> static T GetOrCreateChild(uintptr_t parent, uintptr_t doc, Il2CppString* xpath) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4923D90))(0, parent, doc, xpath);
	}

};

}
