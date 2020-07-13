#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AStar {

class AStar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AStar", "AStar"));
	}

	template <typename T = int32_t> static T& DIRECT_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& OBLIQUE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Calculate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePathLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNeighborNodesInOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNeighborNodeInOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindNodeInOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAddNodeToOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCoordInClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> static T Calculate(uintptr_t maps, uintptr_t startCoord, uintptr_t endCoord, uintptr_t* coordList) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x22D4320))(0, maps, startCoord, endCoord, coordList);
	}
	template <typename T = int32_t> static T CalculatePathLength(uintptr_t maps, uintptr_t startCoord, uintptr_t endCoord) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x22D4D40))(0, maps, startCoord, endCoord);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetPath(uintptr_t end) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22D48CC))(0, end);
	}
	template <typename T = void> static T AddNeighborNodesInOpen(uintptr_t maps, uintptr_t end, uintptr_t current, Il2CppList<uintptr_t>* openList, Il2CppList<uintptr_t>* closeList) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x22D49FC))(0, maps, end, current, openList, closeList);
	}
	template <typename T = void> static T AddNeighborNodeInOpen(uintptr_t maps, uintptr_t end, uintptr_t current, uintptr_t nearby, int32_t value, Il2CppList<uintptr_t>* openList, Il2CppList<uintptr_t>* closeList) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x22D50CC))(0, maps, end, current, nearby, value, openList, closeList);
	}
	template <typename T = uintptr_t> static T FindNodeInOpen(uintptr_t coord, Il2CppList<uintptr_t>* openList) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x22D54F4))(0, coord, openList);
	}
	template <typename T = bool> static T CanAddNodeToOpen(uintptr_t maps, uintptr_t nearby, Il2CppList<uintptr_t>* closeList) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x22D5374))(0, maps, nearby, closeList);
	}
	template <typename T = bool> static T IsCoordInClose(uintptr_t coord, Il2CppList<uintptr_t>* closeList) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x22D46CC))(0, coord, closeList);
	}

};

}
