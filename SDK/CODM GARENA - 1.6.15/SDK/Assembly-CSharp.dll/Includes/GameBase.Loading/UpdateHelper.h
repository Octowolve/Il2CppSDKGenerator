#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class UpdateHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "UpdateHelper"));
	}

	template <typename T = uint32_t> static T& ERR_USER_CANCELLED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& ERR_RES_UPDATE_MAJOR_VERSION_NOT_MATCH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& ERR_POLL_FAILED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& ERR_GET_FILE_PERMISION_FAILED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& ERR_UPDATE_FAILE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ERROR_CODE_EARLY_DISK_CHECK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
