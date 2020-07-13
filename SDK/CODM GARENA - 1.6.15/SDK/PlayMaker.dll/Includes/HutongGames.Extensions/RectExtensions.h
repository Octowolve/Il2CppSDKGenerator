#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.Extensions {

class RectExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.Extensions", "RectExtensions"));
	}


	template <typename T = bool> static T Contains(Il2CppRect rect, float x, float y) {
		return ((T (*)(void *, Il2CppRect, float, float))(Il2CppBase() + 0x2EC7CFC))(0, rect, x, y);
	}
	template <typename T = bool> static T Contains_1(Il2CppRect rect1, Il2CppRect rect2) {
		return ((T (*)(void *, Il2CppRect, Il2CppRect))(Il2CppBase() + 0x2EC7DB0))(0, rect1, rect2);
	}
	template <typename T = bool> static T IntersectsWith(Il2CppRect rect1, Il2CppRect rect2) {
		return ((T (*)(void *, Il2CppRect, Il2CppRect))(Il2CppBase() + 0x2EC7EB0))(0, rect1, rect2);
	}
	template <typename T = Il2CppRect> static T Union(Il2CppRect rect1, Il2CppRect rect2) {
		return ((T (*)(void *, Il2CppRect, Il2CppRect))(Il2CppBase() + 0x2EC7FB0))(0, rect1, rect2);
	}
	template <typename T = Il2CppRect> static T Scale(Il2CppRect rect, float scale) {
		return ((T (*)(void *, Il2CppRect, float))(Il2CppBase() + 0x2EC8170))(0, rect, scale);
	}
	template <typename T = Il2CppRect> static T MinSize(Il2CppRect rect, float minWidth, float minHeight) {
		return ((T (*)(void *, Il2CppRect, float, float))(Il2CppBase() + 0x2EC822C))(0, rect, minWidth, minHeight);
	}
	template <typename T = Il2CppRect> static T MinSize_1(Il2CppRect rect, Il2CppVector2 minSize) {
		return ((T (*)(void *, Il2CppRect, Il2CppVector2))(Il2CppBase() + 0x2EC8380))(0, rect, minSize);
	}

};

}
