#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class AssemblyHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "AssemblyHandler"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& m_TypeDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_Assembly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssembly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetAssembly() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D3E6D4))(0);
	}
	template <typename T = uintptr_t> static T GetType(Il2CppString* typeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2D3E7D4))(0, typeName);
	}

};

}
