#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AwardLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AwardLayer"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EActvAwardLayer_Activity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EActvAwardLayer_SubTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EActvAwardLayer_BatchOneActv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EActvAwardLayer_BackActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
