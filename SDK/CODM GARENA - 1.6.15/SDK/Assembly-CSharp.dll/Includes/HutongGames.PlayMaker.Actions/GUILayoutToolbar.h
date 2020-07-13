#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutToolbar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutToolbar"));
	}

	template <typename T = uintptr_t> T& numButtons() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& selectedButton() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buttonEventsArray() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& imagesArray() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& textsArray() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tooltipsArray() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& contents() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Contents() {
		return ((T (*)(GUILayoutToolbar*))(Il2CppBase() + 0x4F0780C))(this);
	}
	template <typename T = void> T SetButtonsContent() {
		return ((T (*)(GUILayoutToolbar*))(Il2CppBase() + 0x4F07834))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutToolbar*))(Il2CppBase() + 0x4F07B90))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GUILayoutToolbar*))(Il2CppBase() + 0x4F07CBC))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutToolbar*))(Il2CppBase() + 0x4F07DA0))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(GUILayoutToolbar*))(Il2CppBase() + 0x4F08084))(this);
	}

};

}
