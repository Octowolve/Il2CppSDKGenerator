#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerMouseEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerMouseEvents"));
	}


	template <typename T = void> T OnMouseEnter() {
		return ((T (*)(PlayMakerMouseEvents*))(Il2CppBase() + 0x5146120))(this);
	}
	template <typename T = void> T OnMouseDown() {
		return ((T (*)(PlayMakerMouseEvents*))(Il2CppBase() + 0x5146260))(this);
	}
	template <typename T = void> T OnMouseUp() {
		return ((T (*)(PlayMakerMouseEvents*))(Il2CppBase() + 0x51463A0))(this);
	}
	template <typename T = void> T OnMouseUpAsButton() {
		return ((T (*)(PlayMakerMouseEvents*))(Il2CppBase() + 0x5146538))(this);
	}
	template <typename T = void> T OnMouseExit() {
		return ((T (*)(PlayMakerMouseEvents*))(Il2CppBase() + 0x51466D0))(this);
	}
	template <typename T = void> T OnMouseDrag() {
		return ((T (*)(PlayMakerMouseEvents*))(Il2CppBase() + 0x5146810))(this);
	}
	template <typename T = void> T OnMouseOver() {
		return ((T (*)(PlayMakerMouseEvents*))(Il2CppBase() + 0x5146950))(this);
	}

};

}
