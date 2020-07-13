#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DesignerSerializationVisibility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DesignerSerializationVisibility"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Hidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Visible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Content() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
