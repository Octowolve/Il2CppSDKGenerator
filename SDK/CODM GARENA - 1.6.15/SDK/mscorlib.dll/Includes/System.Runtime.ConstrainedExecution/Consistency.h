#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.ConstrainedExecution {

class Consistency
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.ConstrainedExecution", "Consistency"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& MayCorruptAppDomain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MayCorruptInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MayCorruptProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& WillNotCorruptState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
