#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters {

class FormatterAssemblyStyle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters", "FormatterAssemblyStyle"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Simple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Full() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
