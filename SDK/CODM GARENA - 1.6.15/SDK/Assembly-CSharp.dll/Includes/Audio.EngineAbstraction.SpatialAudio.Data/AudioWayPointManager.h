#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.SpatialAudio.Data {

class AudioWayPointManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.SpatialAudio.Data", "AudioWayPointManager"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& mDictPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPointRaw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecaculateEdges() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T AddPointRaw(Il2CppString* strID, Il2CppVector3 vecPosition, Il2CppList<uintptr_t>* pListConnectedLines) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector3, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44E9D78))(0, strID, vecPosition, pListConnectedLines);
	}
	template <typename T = void> static T RecaculateEdges() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E9FAC))(0);
	}

};

}
