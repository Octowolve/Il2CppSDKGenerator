#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpvpPlaylistFirstLevelTab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpvpPlaylistFirstLevelTab"));
	}

	template <typename T = int32_t> T& playlistType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& TabNameLocID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isValid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& lastClickTimeStamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bSelect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& selectPlaylistId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& configList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeIsValidCurrent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ComputeIsValidCurrent(int32_t roomPlaylistId) {
		return ((T (*)(SpvpPlaylistFirstLevelTab*, int32_t))(Il2CppBase() + 0x4319588))(this, roomPlaylistId);
	}

};

}
