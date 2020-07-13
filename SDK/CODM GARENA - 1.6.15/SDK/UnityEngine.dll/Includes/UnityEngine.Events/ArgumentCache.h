#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class ArgumentCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "ArgumentCache"));
	}

	template <typename T = uintptr_t> T& m_ObjectArgument() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_ObjectArgumentAssemblyTypeName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_IntArgument() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_FloatArgument() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_StringArgument() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_BoolArgument() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_unityObjectArgument() {
		return ((T (*)(ArgumentCache*))(Il2CppBase() + 0x4DA9DC8))(this);
	}
	template <typename T = Il2CppString*> T get_unityObjectArgumentAssemblyTypeName() {
		return ((T (*)(ArgumentCache*))(Il2CppBase() + 0x4DA9DD0))(this);
	}
	template <typename T = int32_t> T get_intArgument() {
		return ((T (*)(ArgumentCache*))(Il2CppBase() + 0x4DA9DD8))(this);
	}
	template <typename T = float> T get_floatArgument() {
		return ((T (*)(ArgumentCache*))(Il2CppBase() + 0x4DA9DE0))(this);
	}
	template <typename T = Il2CppString*> T get_stringArgument() {
		return ((T (*)(ArgumentCache*))(Il2CppBase() + 0x4DA9DE8))(this);
	}
	template <typename T = bool> T get_boolArgument() {
		return ((T (*)(ArgumentCache*))(Il2CppBase() + 0x4DA9DF0))(this);
	}
	template <typename T = void> T TidyAssemblyTypeName() {
		return ((T (*)(ArgumentCache*))(Il2CppBase() + 0x4DA9DF8))(this);
	}
	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(ArgumentCache*))(Il2CppBase() + 0x4DA9FD4))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(ArgumentCache*))(Il2CppBase() + 0x4DA9FD8))(this);
	}

};

}
