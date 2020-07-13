#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TMAssistantDownloadSDKTaskState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TMAssistantDownloadSDKTaskState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& DownloadSDKTaskState_ERROR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DownloadSDKTaskState_WAITING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DownloadSDKTaskState_DOWNLOADING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DownloadSDKTaskState_PAUSED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DownloadSDKTaskState_SUCCEED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DownloadSDKTaskState_FAILED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DownloadSDKTaskState_DELETE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
