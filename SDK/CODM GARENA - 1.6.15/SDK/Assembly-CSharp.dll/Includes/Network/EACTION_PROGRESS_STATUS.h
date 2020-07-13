#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EACTIONPROGRESSSTATUS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EACTION_PROGRESS_STATUS"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eACTION_PROGRESS_STATUS_INPROGRESS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eACTION_PROGRESS_STATUS_COMPLETE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eACTION_PROGRESS_STATUS_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
