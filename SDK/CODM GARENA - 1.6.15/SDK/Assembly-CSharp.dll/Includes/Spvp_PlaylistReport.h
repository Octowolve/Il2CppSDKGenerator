#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpvpPlaylistReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Spvp_PlaylistReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SpvpPlaylistReport*))(Il2CppBase() + 0x495B11C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(uintptr_t ePlaylistTlogPos, Il2CppList<Il2CppString*>* list) {
		return ((T (*)(SpvpPlaylistReport*, uintptr_t, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x495B194))(this, ePlaylistTlogPos, list);
	}

};

}
