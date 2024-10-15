#!/usr/bin/python3
"""Defines an inherited list calss Mylist."""


class MyList(list):
    """Implements stored printing for the buil-in list class."""

    def print_sorted(self):
        """prints a list in sorted ascending order."""
        print(sorted(self))
