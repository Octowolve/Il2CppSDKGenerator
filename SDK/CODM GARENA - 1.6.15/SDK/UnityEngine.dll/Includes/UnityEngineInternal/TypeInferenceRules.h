#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineInternal {

class TypeInferenceRules
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngineInternal", "TypeInferenceRules"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& TypeReferencedByFirstArgument() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TypeReferencedBySecondArgument() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ArrayOfTypeReferencedByFirstArgument() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TypeOfFirstArgument() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
