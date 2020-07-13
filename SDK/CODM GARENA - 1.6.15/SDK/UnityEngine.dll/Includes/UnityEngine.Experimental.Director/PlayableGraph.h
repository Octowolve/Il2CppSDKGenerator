#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class PlayableGraph
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "PlayableGraph"));
	}

	template <typename T = uintptr_t> T& m_Handle() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_Version() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = bool> T Connect(uintptr_t source, int32_t sourceOutputPort, uintptr_t destination, int32_t destinationInputPort) {
		return ((T (*)(PlayableGraph*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4DB1340))(this, source, sourceOutputPort, destination, destinationInputPort);
	}
	template <typename T = bool> static T ConnectInternal(uintptr_t graph, uintptr_t source, int32_t sourceOutputPort, uintptr_t destination, int32_t destinationInputPort) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4DB12F8))(0, graph, source, sourceOutputPort, destination, destinationInputPort);
	}
	template <typename T = bool> static T INTERNAL_CALL_ConnectInternal(uintptr_t graph, uintptr_t source, int32_t sourceOutputPort, uintptr_t destination, int32_t destinationInputPort) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4DB1380))(0, graph, source, sourceOutputPort, destination, destinationInputPort);
	}
	template <typename T = void> T DestroyPlayable(uintptr_t playable) {
		return ((T (*)(PlayableGraph*, uintptr_t))(Il2CppBase() + 0x4DB145C))(this, playable);
	}
	template <typename T = void> static T InternalDestroyPlayable(uintptr_t graph, uintptr_t playable) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB1458))(0, graph, playable);
	}
	template <typename T = void> static T INTERNAL_CALL_InternalDestroyPlayable(uintptr_t graph, uintptr_t playable) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB147C))(0, graph, playable);
	}
	template <typename T = void> T DestroySubgraph(uintptr_t playable) {
		return ((T (*)(PlayableGraph*, uintptr_t))(Il2CppBase() + 0x4DB1558))(this, playable);
	}
	template <typename T = void> static T InternalDestroySubgraph(uintptr_t graph, uintptr_t playable) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB153C))(0, graph, playable);
	}
	template <typename T = void> static T INTERNAL_CALL_InternalDestroySubgraph(uintptr_t graph, uintptr_t playable) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB1578))(0, graph, playable);
	}

};

}
