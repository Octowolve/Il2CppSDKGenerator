#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TaskStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TaskStatus"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& TaskStatus_UnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TaskStatus_Finished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TaskStatus_Awarded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
