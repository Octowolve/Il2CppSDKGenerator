#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class MatchTimePlaylistItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "MatchTimePlaylistItem"));
	}

	template <typename T = uintptr_t> T& PlaylistIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& WidgetFeature() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetView(uintptr_t PlaylistConfig) {
		return ((T (*)(MatchTimePlaylistItem*, uintptr_t))(Il2CppBase() + 0x2CD8A34))(this, PlaylistConfig);
	}

};

}
