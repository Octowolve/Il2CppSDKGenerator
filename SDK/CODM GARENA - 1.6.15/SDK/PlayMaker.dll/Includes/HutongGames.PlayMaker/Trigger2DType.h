#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class Trigger2DType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "Trigger2DType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& OnTriggerEnter2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& OnTriggerStay2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& OnTriggerExit2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
