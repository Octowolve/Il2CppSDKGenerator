#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.SpatialAudio.Data {

class AudioWayPointEditorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.SpatialAudio.Data", "AudioWayPointEditorComponent"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& VCDs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listRooms() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> static T& ShowGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& IndicatorSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(AudioWayPointEditorComponent*))(Il2CppBase() + 0x44E95B8))(this);
	}
	template <typename T = uintptr_t> static T CreateWayPointEditor(uintptr_t ptPoint, uintptr_t goParent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44E9784))(0, ptPoint, goParent);
	}

};

}
